#ifndef GEN_REGS_XML
#define GEN_REGS_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
https://github.com/olvaffe/envytools/
git clone https://github.com/olvaffe/envytools.git

Copyright (C) 2014-2015 by the following authors:
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


#define GEN6_REG_MASK__MASK					0xffff0000
#define GEN6_REG_MASK__SHIFT					16
#define GEN6_REG__SIZE						0x400000
#define GEN6_REG_NOPID						0x2094


#define GEN6_REG_SO_PRIM_STORAGE_NEEDED				0x2280

#define GEN6_REG_SO_NUM_PRIMS_WRITTEN				0x2288


#define GEN7_REG_TS_GPGPU_THREADS_DISPATCHED			0x2290

#define GEN7_REG_HS_INVOCATION_COUNT				0x2300

#define GEN7_REG_DS_INVOCATION_COUNT				0x2308

#define GEN6_REG_IA_VERTICES_COUNT				0x2310

#define GEN6_REG_IA_PRIMITIVES_COUNT				0x2318

#define GEN6_REG_VS_INVOCATION_COUNT				0x2320

#define GEN6_REG_GS_INVOCATION_COUNT				0x2328

#define GEN6_REG_GS_PRIMITIVES_COUNT				0x2330

#define GEN6_REG_CL_INVOCATION_COUNT				0x2338

#define GEN6_REG_CL_PRIMITIVES_COUNT				0x2340

#define GEN6_REG_PS_INVOCATION_COUNT				0x2348

#define GEN6_REG_PS_DEPTH_COUNT					0x2350

#define GEN6_REG_TIMESTAMP					0x2358

#define GEN6_REG_OACONTROL					0x2360
#define GEN6_REG_OACONTROL_COUNTER_SELECT__MASK			0x0000001c
#define GEN6_REG_OACONTROL_COUNTER_SELECT__SHIFT		2
#define GEN6_REG_OACONTROL_PERFORMANCE_COUNTER_ENABLE		(0x1 << 0)


#define GEN7_REG_MI_PREDICATE_SRC0				0x2400

#define GEN7_REG_MI_PREDICATE_SRC1				0x2408

#define GEN7_REG_MI_PREDICATE_DATA				0x2410

#define GEN7_REG_MI_PREDICATE_RESULT				0x2418

#define GEN75_REG_MI_PREDICATE_RESULT_1				0x241c

#define GEN75_REG_MI_PREDICATE_RESULT_2				0x2214

#define GEN7_REG_3DPRIM_END_OFFSET				0x2420

#define GEN7_REG_3DPRIM_START_VERTEX				0x2430

#define GEN7_REG_3DPRIM_VERTEX_COUNT				0x2434

#define GEN7_REG_3DPRIM_INSTANCE_COUNT				0x2438

#define GEN7_REG_3DPRIM_START_INSTANCE				0x243c

#define GEN7_REG_3DPRIM_BASE_VERTEX				0x2440

#define GEN75_REG_CS_GPR(i0)					(0x2600 + 0x8*(i0))
#define GEN75_REG_CS_GPR__ESIZE					0x8
#define GEN75_REG_CS_GPR__LEN					0x10

#define GEN7_REG_GPGPU_DISPATCHDIMX				0x2500

#define GEN7_REG_GPGPU_DISPATCHDIMY				0x2504

#define GEN7_REG_GPGPU_DISPATCHDIMZ				0x2508


#define GEN7_REG_SO_NUM_PRIMS_WRITTEN(i0)			(0x5200 + 0x8*(i0))
#define GEN7_REG_SO_NUM_PRIMS_WRITTEN__ESIZE			0x8
#define GEN7_REG_SO_NUM_PRIMS_WRITTEN__LEN			0x4

#define GEN7_REG_SO_PRIM_STORAGE_NEEDED(i0)			(0x5240 + 0x8*(i0))
#define GEN7_REG_SO_PRIM_STORAGE_NEEDED__ESIZE			0x8
#define GEN7_REG_SO_PRIM_STORAGE_NEEDED__LEN			0x4

#define GEN7_REG_SO_WRITE_OFFSET(i0)				(0x5280 + 0x8*(i0))
#define GEN7_REG_SO_WRITE_OFFSET__ESIZE				0x8
#define GEN7_REG_SO_WRITE_OFFSET__LEN				0x4


#define GEN7_REG_CACHE_MODE_0					0x7000
#define GEN7_REG_CACHE_MODE_0_HIZ_RAW_STALL_OPT_DISABLE		(0x1 << 2)

#define GEN7_REG_CACHE_MODE_1					0x7004
#define GEN8_REG_CACHE_MODE_1_NP_EARLY_Z_FAILS_DISABLE		(0x1 << 13)
#define GEN8_REG_CACHE_MODE_1_NP_PMA_FIX_ENABLE			(0x1 << 11)


#define GEN8_REG_L3CNTLREG					0x7034


#define GEN7_REG_L3SQCREG1					0xb010
#define GEN7_REG_L3SQCREG1_CON4DCUNC				(0x1 << 24)
#define GEN7_REG_L3SQCREG1_SQGHPCI__MASK			0x00ff0000
#define GEN7_REG_L3SQCREG1_SQGHPCI__SHIFT			16
#define GEN7_REG_L3SQCREG1_SQGHPCI_18_6				(0x73 << 16)
#define GEN75_REG_L3SQCREG1_SQGPCI__MASK			0x00f80000
#define GEN75_REG_L3SQCREG1_SQGPCI__SHIFT			19
#define GEN75_REG_L3SQCREG1_SQGPCI_24				(0xc << 19)
#define GEN75_REG_L3SQCREG1_SQHPCI__MASK			0x0007c000
#define GEN75_REG_L3SQCREG1_SQHPCI__SHIFT			14
#define GEN75_REG_L3SQCREG1_SQHPCI_8				(0x4 << 14)

#define GEN7_REG_L3SQCREG2					0xb014

#define GEN7_REG_L3SQCREG3					0xb018

#define GEN7_REG_L3CNTLREG1					0xb01c

#define GEN7_REG_L3CNTLREG2					0xb020
#define GEN7_REG_L3CNTLREG2_DCWASLMB				(0x1 << 27)
#define GEN7_REG_L3CNTLREG2_DCWASS__MASK			0x07e00000
#define GEN7_REG_L3CNTLREG2_DCWASS__SHIFT			21
#define GEN7_REG_L3CNTLREG2_ROCPSLMB				(0x1 << 20)
#define GEN7_REG_L3CNTLREG2_RDOCPL__MASK			0x000fc000
#define GEN7_REG_L3CNTLREG2_RDOCPL__SHIFT			14
#define GEN7_REG_L3CNTLREG2_URBSLMB				(0x1 << 7)
#define GEN7_REG_L3CNTLREG2_URBALL__MASK			0x0000007e
#define GEN7_REG_L3CNTLREG2_URBALL__SHIFT			1
#define GEN7_REG_L3CNTLREG2_SLMMENB				(0x1 << 0)

#define GEN7_REG_L3CNTLREG3					0xb024
#define GEN7_REG_L3CNTLREG3_TWALSLMB				(0x1 << 21)
#define GEN7_REG_L3CNTLREG3_TXWYALL__MASK			0x001f8000
#define GEN7_REG_L3CNTLREG3_TXWYALL__SHIFT			15
#define GEN7_REG_L3CNTLREG3_CWASLMB				(0x1 << 14)
#define GEN7_REG_L3CNTLREG3_CTWYALL__MASK			0x00003f00
#define GEN7_REG_L3CNTLREG3_CTWYALL__SHIFT			8
#define GEN7_REG_L3CNTLREG3_ISWYSLMB				(0x1 << 7)
#define GEN7_REG_L3CNTLREG3_ISWYALL__MASK			0x0000007e
#define GEN7_REG_L3CNTLREG3_ISWYALL__SHIFT			1

#define GEN6_REG_BCS_SWCTRL					0x22200
#define GEN6_REG_BCS_SWCTRL_DST_TILING_Y			(0x1 << 1)
#define GEN6_REG_BCS_SWCTRL_SRC_TILING_Y			(0x1 << 0)


#endif /* GEN_REGS_XML */