/*
 * Copyright (C) 2016 Rob Clark <robclark@freedesktop.org>
 * Copyright © 2018 Google, Inc.
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
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Authors:
 *    Rob Clark <robclark@freedesktop.org>
 */

#ifndef FD6_ZSA_H_
#define FD6_ZSA_H_


#include "pipe/p_state.h"
#include "pipe/p_context.h"

#include "freedreno_util.h"

struct fd6_zsa_stateobj {
	struct pipe_depth_stencil_alpha_state base;

	uint32_t rb_alpha_control;
	uint32_t rb_depth_cntl;
	uint32_t rb_stencil_control;
	uint32_t rb_stencilmask;
	uint32_t rb_stencilwrmask;
	uint32_t gras_lrz_cntl;
	uint32_t rb_lrz_cntl;
	bool lrz_write;
	bool invalidate_lrz;

	struct fd_ringbuffer *stateobj;
	struct fd_ringbuffer *stateobj_no_alpha;
};

static inline struct fd6_zsa_stateobj *
fd6_zsa_stateobj(struct pipe_depth_stencil_alpha_state *zsa)
{
	return (struct fd6_zsa_stateobj *)zsa;
}

void * fd6_zsa_state_create(struct pipe_context *pctx,
		const struct pipe_depth_stencil_alpha_state *cso);

void fd6_depth_stencil_alpha_state_delete(struct pipe_context *pctx,
		void *hwcso);

#endif /* FD6_ZSA_H_ */

