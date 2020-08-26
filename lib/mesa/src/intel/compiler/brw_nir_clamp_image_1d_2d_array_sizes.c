/*
 * Copyright © 2020 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#include "compiler/nir/nir_builder.h"
#include "brw_nir.h"

/**
 * GEN:BUG:1806565034:
 *
 * Gen12+ allows to set RENDER_SURFACE_STATE::SurfaceArray to 1 only if
 * array_len > 1. Setting RENDER_SURFACE_STATE::SurfaceArray to 0 results in
 * the HW RESINFO message to report an array size of 0 which breaks texture
 * array size queries.
 *
 * This NIR pass works around this by patching the array size with a
 * MAX(array_size, 1) for array textures.
 */

bool
brw_nir_clamp_image_1d_2d_array_sizes(nir_shader *shader)
{
   bool progress = false;
   nir_builder b;

   nir_foreach_function(func, shader) {
      bool function_progress = false;

      if (!func->impl)
         continue;

      nir_builder_init(&b, func->impl);

      nir_foreach_block(block, func->impl) {
         nir_foreach_instr_safe(instr, block) {
            nir_ssa_def *image_size = NULL;

            switch (instr->type) {
            case nir_instr_type_intrinsic: {
               nir_intrinsic_instr *intr = nir_instr_as_intrinsic(instr);

               switch (intr->intrinsic) {
               case nir_intrinsic_image_size:
               case nir_intrinsic_bindless_image_size:
                  if (!nir_intrinsic_image_array(intr))
                     break;

                  image_size = &intr->dest.ssa;
                  break;

               case nir_intrinsic_image_deref_size: {
                  nir_deref_instr *deref = nir_src_as_deref(intr->src[0]);

                  assert(glsl_type_is_image(deref->type));

                  if (!glsl_sampler_type_is_array(deref->type))
                     break;

                  image_size = &intr->dest.ssa;
                  break;
               }

               default:
                  break;
               }
               break;
            }

            case nir_instr_type_tex: {
               nir_tex_instr *tex_instr = nir_instr_as_tex(instr);
               if (tex_instr->op != nir_texop_txs)
                  break;

               if (!tex_instr->is_array)
                  break;

               image_size = &tex_instr->dest.ssa;
               break;
            }

            default:
               break;
            }

            if (!image_size)
               continue;

            b.cursor = nir_after_instr(instr);

            nir_ssa_def *components[4];
            for (int i = 0; i < image_size->num_components; i++) {
               if (i == (image_size->num_components - 1)) {
                  components[i] = nir_imax(&b, nir_channel(&b, image_size, i),
                                               nir_imm_int(&b, 1));
               } else {
                  components[i] = nir_channel(&b, image_size, i);
               }
            }
            nir_ssa_def *image_size_replacement =
               nir_vec(&b, components, image_size->num_components);

            b.cursor = nir_after_instr(instr);

            nir_ssa_def_rewrite_uses_after(image_size,
                                           nir_src_for_ssa(image_size_replacement),
                                           image_size_replacement->parent_instr);

            function_progress = true;
         }
      }

      if (function_progress) {
         nir_metadata_preserve(func->impl, nir_metadata_block_index |
                                           nir_metadata_dominance);
         progress = function_progress;
      }
   }

   return progress;
}
