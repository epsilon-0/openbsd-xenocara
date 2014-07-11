#ifndef GEN_EU_ISA_XML
#define GEN_EU_ISA_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
https://github.com/olvaffe/envytools/
git clone https://github.com/olvaffe/envytools.git

Copyright (C) 2014 by the following authors:
- Chia-I Wu <olvaffe@gmail.com> (olv)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#define GEN6_OPCODE_ILLEGAL					0x0
#define GEN6_OPCODE_MOV						0x1
#define GEN6_OPCODE_SEL						0x2
#define GEN6_OPCODE_MOVI					0x3
#define GEN6_OPCODE_NOT						0x4
#define GEN6_OPCODE_AND						0x5
#define GEN6_OPCODE_OR						0x6
#define GEN6_OPCODE_XOR						0x7
#define GEN6_OPCODE_SHR						0x8
#define GEN6_OPCODE_SHL						0x9
#define GEN6_OPCODE_DIM						0xa
#define GEN6_OPCODE_ASR						0xc
#define GEN6_OPCODE_CMP						0x10
#define GEN6_OPCODE_CMPN					0x11
#define GEN7_OPCODE_CSEL					0x12
#define GEN7_OPCODE_F32TO16					0x13
#define GEN7_OPCODE_F16TO32					0x14
#define GEN7_OPCODE_BFREV					0x17
#define GEN7_OPCODE_BFE						0x18
#define GEN7_OPCODE_BFI1					0x19
#define GEN7_OPCODE_BFI2					0x1a
#define GEN6_OPCODE_JMPI					0x20
#define GEN7_OPCODE_BRD						0x21
#define GEN6_OPCODE_IF						0x22
#define GEN7_OPCODE_BRC						0x23
#define GEN6_OPCODE_ELSE					0x24
#define GEN6_OPCODE_ENDIF					0x25
#define GEN6_OPCODE_CASE					0x26
#define GEN6_OPCODE_WHILE					0x27
#define GEN6_OPCODE_BREAK					0x28
#define GEN6_OPCODE_CONT					0x29
#define GEN6_OPCODE_HALT					0x2a
#define GEN75_OPCODE_CALLA					0x2b
#define GEN6_OPCODE_CALL					0x2c
#define GEN6_OPCODE_RETURN					0x2d
#define GEN6_OPCODE_WAIT					0x30
#define GEN6_OPCODE_SEND					0x31
#define GEN6_OPCODE_SENDC					0x32
#define GEN6_OPCODE_MATH					0x38
#define GEN6_OPCODE_ADD						0x40
#define GEN6_OPCODE_MUL						0x41
#define GEN6_OPCODE_AVG						0x42
#define GEN6_OPCODE_FRC						0x43
#define GEN6_OPCODE_RNDU					0x44
#define GEN6_OPCODE_RNDD					0x45
#define GEN6_OPCODE_RNDE					0x46
#define GEN6_OPCODE_RNDZ					0x47
#define GEN6_OPCODE_MAC						0x48
#define GEN6_OPCODE_MACH					0x49
#define GEN6_OPCODE_LZD						0x4a
#define GEN7_OPCODE_FBH						0x4b
#define GEN7_OPCODE_FBL						0x4c
#define GEN7_OPCODE_CBIT					0x4d
#define GEN7_OPCODE_ADDC					0x4e
#define GEN7_OPCODE_SUBB					0x4f
#define GEN6_OPCODE_SAD2					0x50
#define GEN6_OPCODE_SADA2					0x51
#define GEN6_OPCODE_DP4						0x54
#define GEN6_OPCODE_DPH						0x55
#define GEN6_OPCODE_DP3						0x56
#define GEN6_OPCODE_DP2						0x57
#define GEN6_OPCODE_LINE					0x59
#define GEN6_OPCODE_PLN						0x5a
#define GEN6_OPCODE_MAD						0x5b
#define GEN6_OPCODE_LRP						0x5c
#define GEN6_OPCODE_NOP						0x7e
#define GEN6_ALIGN_1						0x0
#define GEN6_ALIGN_16						0x1
#define GEN6_MASKCTRL_NORMAL					0x0
#define GEN6_MASKCTRL_NOMASK					0x1
#define GEN6_DEPCTRL_NORMAL					0x0
#define GEN6_DEPCTRL_NODDCLR					0x1
#define GEN6_DEPCTRL_NODDCHK					0x2
#define GEN6_DEPCTRL_NEITHER					0x3
#define GEN6_QTRCTRL_1Q						0x0
#define GEN6_QTRCTRL_2Q						0x1
#define GEN6_QTRCTRL_3Q						0x2
#define GEN6_QTRCTRL_4Q						0x3
#define GEN6_QTRCTRL_1H						0x0
#define GEN6_QTRCTRL_2H						0x2
#define GEN6_THREADCTRL_NORMAL					0x0
#define GEN6_THREADCTRL_ATOMIC					0x1
#define GEN6_THREADCTRL_SWITCH					0x2
#define GEN6_PREDCTRL_NONE					0x0
#define GEN6_PREDCTRL_NORMAL					0x1
#define GEN6_PREDCTRL_ANYV					0x2
#define GEN6_PREDCTRL_ALLV					0x3
#define GEN6_PREDCTRL_ANY2H					0x4
#define GEN6_PREDCTRL_ALL2H					0x5
#define GEN6_PREDCTRL_X						0x2
#define GEN6_PREDCTRL_Y						0x3
#define GEN6_PREDCTRL_Z						0x4
#define GEN6_PREDCTRL_W						0x5
#define GEN6_PREDCTRL_ANY4H					0x6
#define GEN6_PREDCTRL_ALL4H					0x7
#define GEN6_PREDCTRL_ANY8H					0x8
#define GEN6_PREDCTRL_ALL8H					0x9
#define GEN6_PREDCTRL_ANY16H					0xa
#define GEN6_PREDCTRL_ALL16H					0xb
#define GEN7_PREDCTRL_ANY32H					0xc
#define GEN7_PREDCTRL_ALL32H					0xd
#define GEN6_EXECSIZE_1						0x0
#define GEN6_EXECSIZE_2						0x1
#define GEN6_EXECSIZE_4						0x2
#define GEN6_EXECSIZE_8						0x3
#define GEN6_EXECSIZE_16					0x4
#define GEN6_EXECSIZE_32					0x5
#define GEN6_COND_NORMAL					0x0
#define GEN6_COND_Z						0x1
#define GEN6_COND_NZ						0x2
#define GEN6_COND_G						0x3
#define GEN6_COND_GE						0x4
#define GEN6_COND_L						0x5
#define GEN6_COND_LE						0x6
#define GEN6_COND_O						0x8
#define GEN6_COND_U						0x9
#define GEN6_MATH_INV						0x1
#define GEN6_MATH_LOG						0x2
#define GEN6_MATH_EXP						0x3
#define GEN6_MATH_SQRT						0x4
#define GEN6_MATH_RSQ						0x5
#define GEN6_MATH_SIN						0x6
#define GEN6_MATH_COS						0x7
#define GEN6_MATH_FDIV						0x9
#define GEN6_MATH_POW						0xa
#define GEN6_MATH_INT_DIV					0xb
#define GEN6_MATH_INT_DIV_QUOTIENT				0xc
#define GEN6_MATH_INT_DIV_REMAINDER				0xd
#define GEN6_SFID_NULL						0x0
#define GEN6_SFID_SAMPLER					0x2
#define GEN6_SFID_GATEWAY					0x3
#define GEN6_SFID_DP_SAMPLER					0x4
#define GEN6_SFID_DP_RC						0x5
#define GEN6_SFID_URB						0x6
#define GEN6_SFID_SPAWNER					0x7
#define GEN6_SFID_VME						0x8
#define GEN6_SFID_DP_CC						0x9
#define GEN7_SFID_DP_DC0					0xa
#define GEN7_SFID_PI						0xb
#define GEN75_SFID_DP_DC1					0xc
#define GEN6_FILE_ARF						0x0
#define GEN6_FILE_GRF						0x1
#define GEN6_FILE_MRF						0x2
#define GEN6_FILE_IMM						0x3
#define GEN6_TYPE_UD						0x0
#define GEN6_TYPE_D						0x1
#define GEN6_TYPE_UW						0x2
#define GEN6_TYPE_W						0x3
#define GEN6_TYPE_UB						0x4
#define GEN6_TYPE_B						0x5
#define GEN7_TYPE_DF						0x6
#define GEN6_TYPE_F						0x7
#define GEN6_TYPE_UV_IMM					0x4
#define GEN6_TYPE_VF_IMM					0x5
#define GEN6_TYPE_V_IMM						0x6
#define GEN7_TYPE_F_3SRC					0x0
#define GEN7_TYPE_D_3SRC					0x1
#define GEN7_TYPE_UD_3SRC					0x2
#define GEN7_TYPE_DF_3SRC					0x3
#define GEN6_VERTSTRIDE_0					0x0
#define GEN6_VERTSTRIDE_1					0x1
#define GEN6_VERTSTRIDE_2					0x2
#define GEN6_VERTSTRIDE_4					0x3
#define GEN6_VERTSTRIDE_8					0x4
#define GEN6_VERTSTRIDE_16					0x5
#define GEN6_VERTSTRIDE_32					0x6
#define GEN6_VERTSTRIDE_VXH					0xf
#define GEN6_WIDTH_1						0x0
#define GEN6_WIDTH_2						0x1
#define GEN6_WIDTH_4						0x2
#define GEN6_WIDTH_8						0x3
#define GEN6_WIDTH_16						0x4
#define GEN6_HORZSTRIDE_0					0x0
#define GEN6_HORZSTRIDE_1					0x1
#define GEN6_HORZSTRIDE_2					0x2
#define GEN6_HORZSTRIDE_4					0x3
#define GEN6_ADDRMODE_DIRECT					0x0
#define GEN6_ADDRMODE_INDIRECT					0x1
#define GEN6_SWIZZLE_X						0x0
#define GEN6_SWIZZLE_Y						0x1
#define GEN6_SWIZZLE_Z						0x2
#define GEN6_SWIZZLE_W						0x3
#define GEN6_ARF_NULL						0x0
#define GEN6_ARF_A0						0x10
#define GEN6_ARF_ACC0						0x20
#define GEN6_ARF_F0						0x30
#define GEN6_ARF_SR0						0x70
#define GEN6_ARF_CR0						0x80
#define GEN6_ARF_N0						0x90
#define GEN6_ARF_IP						0xa0
#define GEN6_ARF_TDR						0xb0
#define GEN7_ARF_TM0						0xc0

#define GEN6_INST_DW0_SATURATE					(0x1 << 31)
#define GEN6_INST_DW0_ACCWRCTRL					(0x1 << 28)
#define GEN6_INST_DW0_CONDMODIFIER__MASK			0x0f000000
#define GEN6_INST_DW0_CONDMODIFIER__SHIFT			24
#define GEN6_INST_DW0_SFID__MASK				0x0f000000
#define GEN6_INST_DW0_SFID__SHIFT				24
#define GEN6_INST_DW0_FC__MASK					0x0f000000
#define GEN6_INST_DW0_FC__SHIFT					24
#define GEN6_INST_DW0_EXECSIZE__MASK				0x00e00000
#define GEN6_INST_DW0_EXECSIZE__SHIFT				21
#define GEN6_INST_DW0_PREDINV					(0x1 << 20)
#define GEN6_INST_DW0_PREDCTRL__MASK				0x000f0000
#define GEN6_INST_DW0_PREDCTRL__SHIFT				16
#define GEN6_INST_DW0_THREADCTRL__MASK				0x0000c000
#define GEN6_INST_DW0_THREADCTRL__SHIFT				14
#define GEN6_INST_DW0_QTRCTRL__MASK				0x00003000
#define GEN6_INST_DW0_QTRCTRL__SHIFT				12
#define GEN6_INST_DW0_DEPCTRL__MASK				0x00000c00
#define GEN6_INST_DW0_DEPCTRL__SHIFT				10
#define GEN6_INST_DW0_MASKCTRL__MASK				0x00000200
#define GEN6_INST_DW0_MASKCTRL__SHIFT				9
#define GEN6_INST_DW0_ACCESSMODE__MASK				0x00000100
#define GEN6_INST_DW0_ACCESSMODE__SHIFT				8
#define GEN6_INST_DW0_OPCODE__MASK				0x0000007f
#define GEN6_INST_DW0_OPCODE__SHIFT				0

#define GEN6_INST_DW1_ADDRMODE__MASK				0x80000000
#define GEN6_INST_DW1_ADDRMODE__SHIFT				31
#define GEN6_INST_DW1_HORZSTRIDE__MASK				0x60000000
#define GEN6_INST_DW1_HORZSTRIDE__SHIFT				29
#define GEN6_INST_DW1_REG__MASK					0x1fe00000
#define GEN6_INST_DW1_REG__SHIFT				21
#define GEN6_INST_DW1_SUBREG__MASK				0x001f0000
#define GEN6_INST_DW1_SUBREG__SHIFT				16
#define GEN6_INST_DW1_ADDR_SUBREG__MASK				0x1c000000
#define GEN6_INST_DW1_ADDR_SUBREG__SHIFT			26
#define GEN6_INST_DW1_ADDR_IMM__MASK				0x03ff0000
#define GEN6_INST_DW1_ADDR_IMM__SHIFT				16
#define GEN6_INST_DW1_SUBREG_ALIGN16__MASK			0x00100000
#define GEN6_INST_DW1_SUBREG_ALIGN16__SHIFT			20
#define GEN6_INST_DW1_SUBREG_ALIGN16__SHR			4
#define GEN6_INST_DW1_ADDR_IMM_ALIGN16__MASK			0x03f00000
#define GEN6_INST_DW1_ADDR_IMM_ALIGN16__SHIFT			20
#define GEN6_INST_DW1_ADDR_IMM_ALIGN16__SHR			4
#define GEN6_INST_DW1_WRITEMASK__MASK				0x000f0000
#define GEN6_INST_DW1_WRITEMASK__SHIFT				16
#define GEN7_INST_DW1_NIBCTRL					(0x1 << 15)
#define GEN6_INST_DW1_SRC1_TYPE__MASK				0x00007000
#define GEN6_INST_DW1_SRC1_TYPE__SHIFT				12
#define GEN6_INST_DW1_SRC1_FILE__MASK				0x00000c00
#define GEN6_INST_DW1_SRC1_FILE__SHIFT				10
#define GEN6_INST_DW1_SRC0_TYPE__MASK				0x00000380
#define GEN6_INST_DW1_SRC0_TYPE__SHIFT				7
#define GEN6_INST_DW1_SRC0_FILE__MASK				0x00000060
#define GEN6_INST_DW1_SRC0_FILE__SHIFT				5
#define GEN6_INST_DW1_TYPE__MASK				0x0000001c
#define GEN6_INST_DW1_TYPE__SHIFT				2
#define GEN6_INST_DW1_FILE__MASK				0x00000003
#define GEN6_INST_DW1_FILE__SHIFT				0

#define GEN7_INST_DW2_FLAG_REG__MASK				0x04000000
#define GEN7_INST_DW2_FLAG_REG__SHIFT				26
#define GEN6_INST_DW2_FLAG_SUBREG__MASK				0x02000000
#define GEN6_INST_DW2_FLAG_SUBREG__SHIFT			25
#define GEN6_INST_DW2_VERTSTRIDE__MASK				0x01e00000
#define GEN6_INST_DW2_VERTSTRIDE__SHIFT				21
#define GEN6_INST_DW2_WIDTH__MASK				0x001c0000
#define GEN6_INST_DW2_WIDTH__SHIFT				18
#define GEN6_INST_DW2_HORZSTRIDE__MASK				0x00030000
#define GEN6_INST_DW2_HORZSTRIDE__SHIFT				16
#define GEN6_INST_DW2_SWIZZLE_W__MASK				0x000c0000
#define GEN6_INST_DW2_SWIZZLE_W__SHIFT				18
#define GEN6_INST_DW2_SWIZZLE_Z__MASK				0x00030000
#define GEN6_INST_DW2_SWIZZLE_Z__SHIFT				16
#define GEN6_INST_DW2_ADDRMODE__MASK				0x00008000
#define GEN6_INST_DW2_ADDRMODE__SHIFT				15
#define GEN6_INST_DW2_NEGATE					(0x1 << 14)
#define GEN6_INST_DW2_ABSOLUTE					(0x1 << 13)
#define GEN6_INST_DW2_REG__MASK					0x00001fe0
#define GEN6_INST_DW2_REG__SHIFT				5
#define GEN6_INST_DW2_SUBREG__MASK				0x0000001f
#define GEN6_INST_DW2_SUBREG__SHIFT				0
#define GEN6_INST_DW2_ADDR_SUBREG__MASK				0x00001c00
#define GEN6_INST_DW2_ADDR_SUBREG__SHIFT			10
#define GEN6_INST_DW2_ADDR_IMM__MASK				0x000003ff
#define GEN6_INST_DW2_ADDR_IMM__SHIFT				0
#define GEN6_INST_DW2_SUBREG_ALIGN16				(0x1 << 4)
#define GEN6_INST_DW2_SUBREG_ALIGN16__SHR			4
#define GEN6_INST_DW2_ADDR_IMM_ALIGN16__MASK			0x000003f0
#define GEN6_INST_DW2_ADDR_IMM_ALIGN16__SHIFT			4
#define GEN6_INST_DW2_ADDR_IMM_ALIGN16__SHR			4
#define GEN6_INST_DW2_SWIZZLE_Y__MASK				0x0000000c
#define GEN6_INST_DW2_SWIZZLE_Y__SHIFT				2
#define GEN6_INST_DW2_SWIZZLE_X__MASK				0x00000003
#define GEN6_INST_DW2_SWIZZLE_X__SHIFT				0

#define GEN7_INST_DW3_FLAG_REG__MASK				0x04000000
#define GEN7_INST_DW3_FLAG_REG__SHIFT				26
#define GEN6_INST_DW3_FLAG_SUBREG__MASK				0x02000000
#define GEN6_INST_DW3_FLAG_SUBREG__SHIFT			25
#define GEN6_INST_DW3_VERTSTRIDE__MASK				0x01e00000
#define GEN6_INST_DW3_VERTSTRIDE__SHIFT				21
#define GEN6_INST_DW3_WIDTH__MASK				0x001c0000
#define GEN6_INST_DW3_WIDTH__SHIFT				18
#define GEN6_INST_DW3_HORZSTRIDE__MASK				0x00030000
#define GEN6_INST_DW3_HORZSTRIDE__SHIFT				16
#define GEN6_INST_DW3_SWIZZLE_W__MASK				0x000c0000
#define GEN6_INST_DW3_SWIZZLE_W__SHIFT				18
#define GEN6_INST_DW3_SWIZZLE_Z__MASK				0x00030000
#define GEN6_INST_DW3_SWIZZLE_Z__SHIFT				16
#define GEN6_INST_DW3_ADDRMODE__MASK				0x00008000
#define GEN6_INST_DW3_ADDRMODE__SHIFT				15
#define GEN6_INST_DW3_NEGATE					(0x1 << 14)
#define GEN6_INST_DW3_ABSOLUTE					(0x1 << 13)
#define GEN6_INST_DW3_REG__MASK					0x00001fe0
#define GEN6_INST_DW3_REG__SHIFT				5
#define GEN6_INST_DW3_SUBREG__MASK				0x0000001f
#define GEN6_INST_DW3_SUBREG__SHIFT				0
#define GEN6_INST_DW3_ADDR_SUBREG__MASK				0x00001c00
#define GEN6_INST_DW3_ADDR_SUBREG__SHIFT			10
#define GEN6_INST_DW3_ADDR_IMM__MASK				0x000003ff
#define GEN6_INST_DW3_ADDR_IMM__SHIFT				0
#define GEN6_INST_DW3_SUBREG_ALIGN16				(0x1 << 4)
#define GEN6_INST_DW3_SUBREG_ALIGN16__SHR			4
#define GEN6_INST_DW3_ADDR_IMM_ALIGN16__MASK			0x000003f0
#define GEN6_INST_DW3_ADDR_IMM_ALIGN16__SHIFT			4
#define GEN6_INST_DW3_ADDR_IMM_ALIGN16__SHR			4
#define GEN6_INST_DW3_SWIZZLE_Y__MASK				0x0000000c
#define GEN6_INST_DW3_SWIZZLE_Y__SHIFT				2
#define GEN6_INST_DW3_SWIZZLE_X__MASK				0x00000003
#define GEN6_INST_DW3_SWIZZLE_X__SHIFT				0


#define GEN6_3SRC_DW0_SATURATE					(0x1 << 31)
#define GEN6_3SRC_DW0_ACCWRCTRL					(0x1 << 28)
#define GEN6_3SRC_DW0_CONDMODIFIER__MASK			0x0f000000
#define GEN6_3SRC_DW0_CONDMODIFIER__SHIFT			24
#define GEN6_3SRC_DW0_SFID__MASK				0x0f000000
#define GEN6_3SRC_DW0_SFID__SHIFT				24
#define GEN6_3SRC_DW0_FC__MASK					0x0f000000
#define GEN6_3SRC_DW0_FC__SHIFT					24
#define GEN6_3SRC_DW0_EXECSIZE__MASK				0x00e00000
#define GEN6_3SRC_DW0_EXECSIZE__SHIFT				21
#define GEN6_3SRC_DW0_PREDINV					(0x1 << 20)
#define GEN6_3SRC_DW0_PREDCTRL__MASK				0x000f0000
#define GEN6_3SRC_DW0_PREDCTRL__SHIFT				16
#define GEN6_3SRC_DW0_THREADCTRL__MASK				0x0000c000
#define GEN6_3SRC_DW0_THREADCTRL__SHIFT				14
#define GEN6_3SRC_DW0_QTRCTRL__MASK				0x00003000
#define GEN6_3SRC_DW0_QTRCTRL__SHIFT				12
#define GEN6_3SRC_DW0_DEPCTRL__MASK				0x00000c00
#define GEN6_3SRC_DW0_DEPCTRL__SHIFT				10
#define GEN6_3SRC_DW0_MASKCTRL__MASK				0x00000200
#define GEN6_3SRC_DW0_MASKCTRL__SHIFT				9
#define GEN6_3SRC_DW0_ACCESSMODE__MASK				0x00000100
#define GEN6_3SRC_DW0_ACCESSMODE__SHIFT				8
#define GEN6_3SRC_DW0_OPCODE__MASK				0x0000007f
#define GEN6_3SRC_DW0_OPCODE__SHIFT				0

#define GEN6_3SRC_DW1_REG__MASK					0xff000000
#define GEN6_3SRC_DW1_REG__SHIFT				24
#define GEN6_3SRC_DW1_SUBREG__MASK				0x00e00000
#define GEN6_3SRC_DW1_SUBREG__SHIFT				21
#define GEN6_3SRC_DW1_SUBREG__SHR				2
#define GEN6_3SRC_DW1_WRITEMASK__MASK				0x001e0000
#define GEN6_3SRC_DW1_WRITEMASK__SHIFT				17
#define GEN7_3SRC_DW1_NIBCTRL					(0x1 << 15)
#define GEN7_3SRC_DW1_TYPE__MASK				0x00003000
#define GEN7_3SRC_DW1_TYPE__SHIFT				12
#define GEN7_3SRC_DW1_SRC_TYPE__MASK				0x00000c00
#define GEN7_3SRC_DW1_SRC_TYPE__SHIFT				10
#define GEN6_3SRC_DW1_SRC2_NEGATE				(0x1 << 9)
#define GEN6_3SRC_DW1_SRC2_ABSOLUTE				(0x1 << 8)
#define GEN6_3SRC_DW1_SRC1_NEGATE				(0x1 << 7)
#define GEN6_3SRC_DW1_SRC1_ABSOLUTE				(0x1 << 6)
#define GEN6_3SRC_DW1_SRC0_NEGATE				(0x1 << 5)
#define GEN6_3SRC_DW1_SRC0_ABSOLUTE				(0x1 << 4)
#define GEN7_3SRC_DW1_FLAG_REG__MASK				0x00000004
#define GEN7_3SRC_DW1_FLAG_REG__SHIFT				2
#define GEN6_3SRC_DW1_FLAG_SUBREG__MASK				0x00000002
#define GEN6_3SRC_DW1_FLAG_SUBREG__SHIFT			1
#define GEN6_3SRC_DW1_FILE_MRF					(0x1 << 0)

#define GEN6_3SRC_SRC_2__MASK				0x7ffffc0000000000ULL
#define GEN6_3SRC_SRC_2__SHIFT					42
#define GEN6_3SRC_SRC_2_REG__MASK			0x3fc0000000000000ULL
#define GEN6_3SRC_SRC_2_REG__SHIFT				54
#define GEN6_3SRC_SRC_2_SUBREG__MASK			0x0038000000000000ULL
#define GEN6_3SRC_SRC_2_SUBREG__SHIFT				51
#define GEN6_3SRC_SRC_2_SUBREG__SHR				2
#define GEN6_3SRC_SRC_2_SWIZZLE_W__MASK			0x0006000000000000ULL
#define GEN6_3SRC_SRC_2_SWIZZLE_W__SHIFT			49
#define GEN6_3SRC_SRC_2_SWIZZLE_Z__MASK			0x0001800000000000ULL
#define GEN6_3SRC_SRC_2_SWIZZLE_Z__SHIFT			47
#define GEN6_3SRC_SRC_2_SWIZZLE_Y__MASK			0x0000600000000000ULL
#define GEN6_3SRC_SRC_2_SWIZZLE_Y__SHIFT			45
#define GEN6_3SRC_SRC_2_SWIZZLE_X__MASK			0x0000180000000000ULL
#define GEN6_3SRC_SRC_2_SWIZZLE_X__SHIFT			43
#define GEN6_3SRC_SRC_2_REPCTRL					(0x1 << 42)
#define GEN6_3SRC_SRC_1__MASK				0x000003ffffe00000ULL
#define GEN6_3SRC_SRC_1__SHIFT					21
#define GEN6_3SRC_SRC_1_REG__MASK			0x000001fe00000000ULL
#define GEN6_3SRC_SRC_1_REG__SHIFT				33
#define GEN6_3SRC_SRC_1_SUBREG__MASK			0x00000001c0000000ULL
#define GEN6_3SRC_SRC_1_SUBREG__SHIFT				30
#define GEN6_3SRC_SRC_1_SUBREG__SHR				2
#define GEN6_3SRC_SRC_1_SWIZZLE_W__MASK				0x30000000
#define GEN6_3SRC_SRC_1_SWIZZLE_W__SHIFT			28
#define GEN6_3SRC_SRC_1_SWIZZLE_Z__MASK				0x0c000000
#define GEN6_3SRC_SRC_1_SWIZZLE_Z__SHIFT			26
#define GEN6_3SRC_SRC_1_SWIZZLE_Y__MASK				0x03000000
#define GEN6_3SRC_SRC_1_SWIZZLE_Y__SHIFT			24
#define GEN6_3SRC_SRC_1_SWIZZLE_X__MASK				0x00c00000
#define GEN6_3SRC_SRC_1_SWIZZLE_X__SHIFT			22
#define GEN6_3SRC_SRC_1_REPCTRL					(0x1 << 21)
#define GEN6_3SRC_SRC_0__MASK					0x001fffff
#define GEN6_3SRC_SRC_0__SHIFT					0
#define GEN6_3SRC_SRC_0_REG__MASK				0x000ff000
#define GEN6_3SRC_SRC_0_REG__SHIFT				12
#define GEN6_3SRC_SRC_0_SUBREG__MASK				0x00000e00
#define GEN6_3SRC_SRC_0_SUBREG__SHIFT				9
#define GEN6_3SRC_SRC_0_SUBREG__SHR				2
#define GEN6_3SRC_SRC_0_SWIZZLE_W__MASK				0x00000180
#define GEN6_3SRC_SRC_0_SWIZZLE_W__SHIFT			7
#define GEN6_3SRC_SRC_0_SWIZZLE_Z__MASK				0x00000060
#define GEN6_3SRC_SRC_0_SWIZZLE_Z__SHIFT			5
#define GEN6_3SRC_SRC_0_SWIZZLE_Y__MASK				0x00000018
#define GEN6_3SRC_SRC_0_SWIZZLE_Y__SHIFT			3
#define GEN6_3SRC_SRC_0_SWIZZLE_X__MASK				0x00000006
#define GEN6_3SRC_SRC_0_SWIZZLE_X__SHIFT			1
#define GEN6_3SRC_SRC_0_REPCTRL					(0x1 << 0)


#endif /* GEN_EU_ISA_XML */