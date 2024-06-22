/*
 * Copyright 2019 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef V10_STRUCTS_H_
#define V10_STRUCTS_H_

struct v10_gfx_mqd {
	uint32_t reserved_0; // offset: 0  (0x0)
	uint32_t reserved_1; // offset: 1  (0x1)
	uint32_t reserved_2; // offset: 2  (0x2)
	uint32_t reserved_3; // offset: 3  (0x3)
	uint32_t reserved_4; // offset: 4  (0x4)
	uint32_t reserved_5; // offset: 5  (0x5)
	uint32_t reserved_6; // offset: 6  (0x6)
	uint32_t reserved_7; // offset: 7  (0x7)
	uint32_t reserved_8; // offset: 8  (0x8)
	uint32_t reserved_9; // offset: 9  (0x9)
	uint32_t reserved_10; // offset: 10  (0xA)
	uint32_t reserved_11; // offset: 11  (0xB)
	uint32_t reserved_12; // offset: 12  (0xC)
	uint32_t reserved_13; // offset: 13  (0xD)
	uint32_t reserved_14; // offset: 14  (0xE)
	uint32_t reserved_15; // offset: 15  (0xF)
	uint32_t reserved_16; // offset: 16  (0x10)
	uint32_t reserved_17; // offset: 17  (0x11)
	uint32_t reserved_18; // offset: 18  (0x12)
	uint32_t reserved_19; // offset: 19  (0x13)
	uint32_t reserved_20; // offset: 20  (0x14)
	uint32_t reserved_21; // offset: 21  (0x15)
	uint32_t reserved_22; // offset: 22  (0x16)
	uint32_t reserved_23; // offset: 23  (0x17)
	uint32_t reserved_24; // offset: 24  (0x18)
	uint32_t reserved_25; // offset: 25  (0x19)
	uint32_t reserved_26; // offset: 26  (0x1A)
	uint32_t reserved_27; // offset: 27  (0x1B)
	uint32_t reserved_28; // offset: 28  (0x1C)
	uint32_t reserved_29; // offset: 29  (0x1D)
	uint32_t reserved_30; // offset: 30  (0x1E)
	uint32_t reserved_31; // offset: 31  (0x1F)
	uint32_t reserved_32; // offset: 32  (0x20)
	uint32_t reserved_33; // offset: 33  (0x21)
	uint32_t reserved_34; // offset: 34  (0x22)
	uint32_t reserved_35; // offset: 35  (0x23)
	uint32_t reserved_36; // offset: 36  (0x24)
	uint32_t reserved_37; // offset: 37  (0x25)
	uint32_t reserved_38; // offset: 38  (0x26)
	uint32_t reserved_39; // offset: 39  (0x27)
	uint32_t reserved_40; // offset: 40  (0x28)
	uint32_t reserved_41; // offset: 41  (0x29)
	uint32_t reserved_42; // offset: 42  (0x2A)
	uint32_t reserved_43; // offset: 43  (0x2B)
	uint32_t reserved_44; // offset: 44  (0x2C)
	uint32_t reserved_45; // offset: 45  (0x2D)
	uint32_t reserved_46; // offset: 46  (0x2E)
	uint32_t reserved_47; // offset: 47  (0x2F)
	uint32_t reserved_48; // offset: 48  (0x30)
	uint32_t reserved_49; // offset: 49  (0x31)
	uint32_t reserved_50; // offset: 50  (0x32)
	uint32_t reserved_51; // offset: 51  (0x33)
	uint32_t reserved_52; // offset: 52  (0x34)
	uint32_t reserved_53; // offset: 53  (0x35)
	uint32_t reserved_54; // offset: 54  (0x36)
	uint32_t reserved_55; // offset: 55  (0x37)
	uint32_t reserved_56; // offset: 56  (0x38)
	uint32_t reserved_57; // offset: 57  (0x39)
	uint32_t reserved_58; // offset: 58  (0x3A)
	uint32_t reserved_59; // offset: 59  (0x3B)
	uint32_t reserved_60; // offset: 60  (0x3C)
	uint32_t reserved_61; // offset: 61  (0x3D)
	uint32_t reserved_62; // offset: 62  (0x3E)
	uint32_t reserved_63; // offset: 63  (0x3F)
	uint32_t reserved_64; // offset: 64  (0x40)
	uint32_t reserved_65; // offset: 65  (0x41)
	uint32_t reserved_66; // offset: 66  (0x42)
	uint32_t reserved_67; // offset: 67  (0x43)
	uint32_t reserved_68; // offset: 68  (0x44)
	uint32_t reserved_69; // offset: 69  (0x45)
	uint32_t reserved_70; // offset: 70  (0x46)
	uint32_t reserved_71; // offset: 71  (0x47)
	uint32_t reserved_72; // offset: 72  (0x48)
	uint32_t reserved_73; // offset: 73  (0x49)
	uint32_t reserved_74; // offset: 74  (0x4A)
	uint32_t reserved_75; // offset: 75  (0x4B)
	uint32_t reserved_76; // offset: 76  (0x4C)
	uint32_t reserved_77; // offset: 77  (0x4D)
	uint32_t reserved_78; // offset: 78  (0x4E)
	uint32_t reserved_79; // offset: 79  (0x4F)
	uint32_t reserved_80; // offset: 80  (0x50)
	uint32_t reserved_81; // offset: 81  (0x51)
	uint32_t reserved_82; // offset: 82  (0x52)
	uint32_t reserved_83; // offset: 83  (0x53)
	uint32_t reserved_84; // offset: 84  (0x54)
	uint32_t reserved_85; // offset: 85  (0x55)
	uint32_t reserved_86; // offset: 86  (0x56)
	uint32_t reserved_87; // offset: 87  (0x57)
	uint32_t reserved_88; // offset: 88  (0x58)
	uint32_t reserved_89; // offset: 89  (0x59)
	uint32_t reserved_90; // offset: 90  (0x5A)
	uint32_t reserved_91; // offset: 91  (0x5B)
	uint32_t reserved_92; // offset: 92  (0x5C)
	uint32_t reserved_93; // offset: 93  (0x5D)
	uint32_t reserved_94; // offset: 94  (0x5E)
	uint32_t reserved_95; // offset: 95  (0x5F)
	uint32_t reserved_96; // offset: 96  (0x60)
	uint32_t reserved_97; // offset: 97  (0x61)
	uint32_t reserved_98; // offset: 98  (0x62)
	uint32_t reserved_99; // offset: 99  (0x63)
	uint32_t reserved_100; // offset: 100  (0x64)
	uint32_t reserved_101; // offset: 101  (0x65)
	uint32_t reserved_102; // offset: 102  (0x66)
	uint32_t reserved_103; // offset: 103  (0x67)
	uint32_t reserved_104; // offset: 104  (0x68)
	uint32_t reserved_105; // offset: 105  (0x69)
	uint32_t disable_queue; // offset: 106  (0x6A)
	uint32_t reserved_107; // offset: 107  (0x6B)
	uint32_t reserved_108; // offset: 108  (0x6C)
	uint32_t reserved_109; // offset: 109  (0x6D)
	uint32_t reserved_110; // offset: 110  (0x6E)
	uint32_t reserved_111; // offset: 111  (0x6F)
	uint32_t reserved_112; // offset: 112  (0x70)
	uint32_t reserved_113; // offset: 113  (0x71)
	uint32_t reserved_114; // offset: 114  (0x72)
	uint32_t reserved_115; // offset: 115  (0x73)
	uint32_t reserved_116; // offset: 116  (0x74)
	uint32_t reserved_117; // offset: 117  (0x75)
	uint32_t reserved_118; // offset: 118  (0x76)
	uint32_t reserved_119; // offset: 119  (0x77)
	uint32_t reserved_120; // offset: 120  (0x78)
	uint32_t reserved_121; // offset: 121  (0x79)
	uint32_t reserved_122; // offset: 122  (0x7A)
	uint32_t reserved_123; // offset: 123  (0x7B)
	uint32_t reserved_124; // offset: 124  (0x7C)
	uint32_t reserved_125; // offset: 125  (0x7D)
	uint32_t reserved_126; // offset: 126  (0x7E)
	uint32_t reserved_127; // offset: 127  (0x7F)
	uint32_t cp_mqd_base_addr; // offset: 128  (0x80)
	uint32_t cp_mqd_base_addr_hi; // offset: 129  (0x81)
	uint32_t cp_gfx_hqd_active; // offset: 130  (0x82)
	uint32_t cp_gfx_hqd_vmid; // offset: 131  (0x83)
	uint32_t reserved_131; // offset: 132  (0x84)
	uint32_t reserved_132; // offset: 133  (0x85)
	uint32_t cp_gfx_hqd_queue_priority; // offset: 134  (0x86)
	uint32_t cp_gfx_hqd_quantum; // offset: 135  (0x87)
	uint32_t cp_gfx_hqd_base; // offset: 136  (0x88)
	uint32_t cp_gfx_hqd_base_hi; // offset: 137  (0x89)
	uint32_t cp_gfx_hqd_rptr; // offset: 138  (0x8A)
	uint32_t cp_gfx_hqd_rptr_addr; // offset: 139  (0x8B)
	uint32_t cp_gfx_hqd_rptr_addr_hi; // offset: 140  (0x8C)
	uint32_t cp_rb_wptr_poll_addr_lo; // offset: 141  (0x8D)
	uint32_t cp_rb_wptr_poll_addr_hi; // offset: 142  (0x8E)
	uint32_t cp_rb_doorbell_control; // offset: 143  (0x8F)
	uint32_t cp_gfx_hqd_offset; // offset: 144  (0x90)
	uint32_t cp_gfx_hqd_cntl; // offset: 145  (0x91)
	uint32_t reserved_146; // offset: 146  (0x92)
	uint32_t reserved_147; // offset: 147  (0x93)
	uint32_t cp_gfx_hqd_csmd_rptr; // offset: 148  (0x94)
	uint32_t cp_gfx_hqd_wptr; // offset: 149  (0x95)
	uint32_t cp_gfx_hqd_wptr_hi; // offset: 150  (0x96)
	uint32_t reserved_151; // offset: 151  (0x97)
	uint32_t reserved_152; // offset: 152  (0x98)
	uint32_t reserved_153; // offset: 153  (0x99)
	uint32_t reserved_154; // offset: 154  (0x9A)
	uint32_t reserved_155; // offset: 155  (0x9B)
	uint32_t cp_gfx_hqd_mapped; // offset: 156  (0x9C)
	uint32_t cp_gfx_hqd_que_mgr_control; // offset: 157  (0x9D)
	uint32_t reserved_158; // offset: 158  (0x9E)
	uint32_t reserved_159; // offset: 159  (0x9F)
	uint32_t cp_gfx_hqd_hq_status0; // offset: 160  (0xA0)
	uint32_t cp_gfx_hqd_hq_control0; // offset: 161  (0xA1)
	uint32_t cp_gfx_mqd_control; // offset: 162  (0xA2)
	uint32_t reserved_163; // offset: 163  (0xA3)
	uint32_t reserved_164; // offset: 164  (0xA4)
	uint32_t reserved_165; // offset: 165  (0xA5)
	uint32_t reserved_166; // offset: 166  (0xA6)
	uint32_t reserved_167; // offset: 167  (0xA7)
	uint32_t reserved_168; // offset: 168  (0xA8)
	uint32_t reserved_169; // offset: 169  (0xA9)
	uint32_t cp_num_prim_needed_count0_lo; // offset: 170  (0xAA)
	uint32_t cp_num_prim_needed_count0_hi; // offset: 171  (0xAB)
	uint32_t cp_num_prim_needed_count1_lo; // offset: 172  (0xAC)
	uint32_t cp_num_prim_needed_count1_hi; // offset: 173  (0xAD)
	uint32_t cp_num_prim_needed_count2_lo; // offset: 174  (0xAE)
	uint32_t cp_num_prim_needed_count2_hi; // offset: 175  (0xAF)
	uint32_t cp_num_prim_needed_count3_lo; // offset: 176  (0xB0)
	uint32_t cp_num_prim_needed_count3_hi; // offset: 177  (0xB1)
	uint32_t cp_num_prim_written_count0_lo; // offset: 178  (0xB2)
	uint32_t cp_num_prim_written_count0_hi; // offset: 179  (0xB3)
	uint32_t cp_num_prim_written_count1_lo; // offset: 180  (0xB4)
	uint32_t cp_num_prim_written_count1_hi; // offset: 181  (0xB5)
	uint32_t cp_num_prim_written_count2_lo; // offset: 182  (0xB6)
	uint32_t cp_num_prim_written_count2_hi; // offset: 183  (0xB7)
	uint32_t cp_num_prim_written_count3_lo; // offset: 184  (0xB8)
	uint32_t cp_num_prim_written_count3_hi; // offset: 185  (0xB9)
	uint32_t reserved_186; // offset: 186  (0xBA)
	uint32_t reserved_187; // offset: 187  (0xBB)
	uint32_t reserved_188; // offset: 188  (0xBC)
	uint32_t reserved_189; // offset: 189  (0xBD)
	uint32_t mp1_smn_fps_cnt; // offset: 190  (0xBE)
	uint32_t sq_thread_trace_buf0_base; // offset: 191  (0xBF)
	uint32_t sq_thread_trace_buf0_size; // offset: 192  (0xC0)
	uint32_t sq_thread_trace_buf1_base; // offset: 193  (0xC1)
	uint32_t sq_thread_trace_buf1_size; // offset: 194  (0xC2)
	uint32_t sq_thread_trace_wptr; // offset: 195  (0xC3)
	uint32_t sq_thread_trace_mask; // offset: 196  (0xC4)
	uint32_t sq_thread_trace_token_mask; // offset: 197  (0xC5)
	uint32_t sq_thread_trace_ctrl; // offset: 198  (0xC6)
	uint32_t sq_thread_trace_status; // offset: 199  (0xC7)
	uint32_t sq_thread_trace_dropped_cntr; // offset: 200  (0xC8)
	uint32_t sq_thread_trace_finish_done_debug; // offset: 201  (0xC9)
	uint32_t sq_thread_trace_gfx_draw_cntr; // offset: 202  (0xCA)
	uint32_t sq_thread_trace_gfx_marker_cntr; // offset: 203  (0xCB)
	uint32_t sq_thread_trace_hp3d_draw_cntr; // offset: 204  (0xCC)
	uint32_t sq_thread_trace_hp3d_marker_cntr; // offset: 205  (0xCD)
	uint32_t reserved_206; // offset: 206  (0xCE)
	uint32_t reserved_207; // offset: 207  (0xCF)
	uint32_t cp_sc_psinvoc_count0_lo; // offset: 208  (0xD0)
	uint32_t cp_sc_psinvoc_count0_hi; // offset: 209  (0xD1)
	uint32_t cp_pa_cprim_count_lo; // offset: 210  (0xD2)
	uint32_t cp_pa_cprim_count_hi; // offset: 211  (0xD3)
	uint32_t cp_pa_cinvoc_count_lo; // offset: 212  (0xD4)
	uint32_t cp_pa_cinvoc_count_hi; // offset: 213  (0xD5)
	uint32_t cp_vgt_vsinvoc_count_lo; // offset: 214  (0xD6)
	uint32_t cp_vgt_vsinvoc_count_hi; // offset: 215  (0xD7)
	uint32_t cp_vgt_gsinvoc_count_lo; // offset: 216  (0xD8)
	uint32_t cp_vgt_gsinvoc_count_hi; // offset: 217  (0xD9)
	uint32_t cp_vgt_gsprim_count_lo; // offset: 218  (0xDA)
	uint32_t cp_vgt_gsprim_count_hi; // offset: 219  (0xDB)
	uint32_t cp_vgt_iaprim_count_lo; // offset: 220  (0xDC)
	uint32_t cp_vgt_iaprim_count_hi; // offset: 221  (0xDD)
	uint32_t cp_vgt_iavert_count_lo; // offset: 222  (0xDE)
	uint32_t cp_vgt_iavert_count_hi; // offset: 223  (0xDF)
	uint32_t cp_vgt_hsinvoc_count_lo; // offset: 224  (0xE0)
	uint32_t cp_vgt_hsinvoc_count_hi; // offset: 225  (0xE1)
	uint32_t cp_vgt_dsinvoc_count_lo; // offset: 226  (0xE2)
	uint32_t cp_vgt_dsinvoc_count_hi; // offset: 227  (0xE3)
	uint32_t cp_vgt_csinvoc_count_lo; // offset: 228  (0xE4)
	uint32_t cp_vgt_csinvoc_count_hi; // offset: 229  (0xE5)
	uint32_t reserved_230; // offset: 230  (0xE6)
	uint32_t reserved_231; // offset: 231  (0xE7)
	uint32_t reserved_232; // offset: 232  (0xE8)
	uint32_t reserved_233; // offset: 233  (0xE9)
	uint32_t reserved_234; // offset: 234  (0xEA)
	uint32_t reserved_235; // offset: 235  (0xEB)
	uint32_t reserved_236; // offset: 236  (0xEC)
	uint32_t reserved_237; // offset: 237  (0xED)
	uint32_t reserved_238; // offset: 238  (0xEE)
	uint32_t reserved_239; // offset: 239  (0xEF)
	uint32_t reserved_240; // offset: 240  (0xF0)
	uint32_t reserved_241; // offset: 241  (0xF1)
	uint32_t reserved_242; // offset: 242  (0xF2)
	uint32_t reserved_243; // offset: 243  (0xF3)
	uint32_t reserved_244; // offset: 244  (0xF4)
	uint32_t reserved_245; // offset: 245  (0xF5)
	uint32_t reserved_246; // offset: 246  (0xF6)
	uint32_t reserved_247; // offset: 247  (0xF7)
	uint32_t reserved_248; // offset: 248  (0xF8)
	uint32_t reserved_249; // offset: 249  (0xF9)
	uint32_t reserved_250; // offset: 250  (0xFA)
	uint32_t reserved_251; // offset: 251  (0xFB)
	uint32_t reserved_252; // offset: 252  (0xFC)
	uint32_t reserved_253; // offset: 253  (0xFD)
	uint32_t reserved_254; // offset: 254  (0xFE)
	uint32_t reserved_255; // offset: 255  (0xFF)
	uint32_t reserved_256; // offset: 256  (0x100)
	uint32_t reserved_257; // offset: 257  (0x101)
	uint32_t reserved_258; // offset: 258  (0x102)
	uint32_t reserved_259; // offset: 259  (0x103)
	uint32_t reserved_260; // offset: 260  (0x104)
	uint32_t reserved_261; // offset: 261  (0x105)
	uint32_t reserved_262; // offset: 262  (0x106)
	uint32_t reserved_263; // offset: 263  (0x107)
	uint32_t reserved_264; // offset: 264  (0x108)
	uint32_t reserved_265; // offset: 265  (0x109)
	uint32_t reserved_266; // offset: 266  (0x10A)
	uint32_t reserved_267; // offset: 267  (0x10B)
	uint32_t vgt_strmout_buffer_filled_size_0; // offset: 268  (0x10C)
	uint32_t vgt_strmout_buffer_filled_size_1; // offset: 269  (0x10D)
	uint32_t vgt_strmout_buffer_filled_size_2; // offset: 270  (0x10E)
	uint32_t vgt_strmout_buffer_filled_size_3; // offset: 271  (0x10F)
	uint32_t reserved_272; // offset: 272  (0x110)
	uint32_t reserved_273; // offset: 273  (0x111)
	uint32_t reserved_274; // offset: 274  (0x112)
	uint32_t reserved_275; // offset: 275  (0x113)
	uint32_t vgt_dma_max_size; // offset: 276  (0x114)
	uint32_t vgt_dma_num_instances; // offset: 277  (0x115)
	uint32_t reserved_278; // offset: 278  (0x116)
	uint32_t reserved_279; // offset: 279  (0x117)
	uint32_t reserved_280; // offset: 280  (0x118)
	uint32_t reserved_281; // offset: 281  (0x119)
	uint32_t reserved_282; // offset: 282  (0x11A)
	uint32_t reserved_283; // offset: 283  (0x11B)
	uint32_t reserved_284; // offset: 284  (0x11C)
	uint32_t reserved_285; // offset: 285  (0x11D)
	uint32_t reserved_286; // offset: 286  (0x11E)
	uint32_t reserved_287; // offset: 287  (0x11F)
	uint32_t it_set_base_ib_addr_lo; // offset: 288  (0x120)
	uint32_t it_set_base_ib_addr_hi; // offset: 289  (0x121)
	uint32_t reserved_290; // offset: 290  (0x122)
	uint32_t reserved_291; // offset: 291  (0x123)
	uint32_t reserved_292; // offset: 292  (0x124)
	uint32_t reserved_293; // offset: 293  (0x125)
	uint32_t reserved_294; // offset: 294  (0x126)
	uint32_t reserved_295; // offset: 295  (0x127)
	uint32_t reserved_296; // offset: 296  (0x128)
	uint32_t reserved_297; // offset: 297  (0x129)
	uint32_t reserved_298; // offset: 298  (0x12A)
	uint32_t reserved_299; // offset: 299  (0x12B)
	uint32_t reserved_300; // offset: 300  (0x12C)
	uint32_t reserved_301; // offset: 301  (0x12D)
	uint32_t reserved_302; // offset: 302  (0x12E)
	uint32_t reserved_303; // offset: 303  (0x12F)
	uint32_t reserved_304; // offset: 304  (0x130)
	uint32_t reserved_305; // offset: 305  (0x131)
	uint32_t reserved_306; // offset: 306  (0x132)
	uint32_t reserved_307; // offset: 307  (0x133)
	uint32_t reserved_308; // offset: 308  (0x134)
	uint32_t reserved_309; // offset: 309  (0x135)
	uint32_t reserved_310; // offset: 310  (0x136)
	uint32_t reserved_311; // offset: 311  (0x137)
	uint32_t reserved_312; // offset: 312  (0x138)
	uint32_t reserved_313; // offset: 313  (0x139)
	uint32_t reserved_314; // offset: 314  (0x13A)
	uint32_t reserved_315; // offset: 315  (0x13B)
	uint32_t reserved_316; // offset: 316  (0x13C)
	uint32_t reserved_317; // offset: 317  (0x13D)
	uint32_t reserved_318; // offset: 318  (0x13E)
	uint32_t reserved_319; // offset: 319  (0x13F)
	uint32_t reserved_320; // offset: 320  (0x140)
	uint32_t reserved_321; // offset: 321  (0x141)
	uint32_t reserved_322; // offset: 322  (0x142)
	uint32_t reserved_323; // offset: 323  (0x143)
	uint32_t reserved_324; // offset: 324  (0x144)
	uint32_t reserved_325; // offset: 325  (0x145)
	uint32_t reserved_326; // offset: 326  (0x146)
	uint32_t reserved_327; // offset: 327  (0x147)
	uint32_t reserved_328; // offset: 328  (0x148)
	uint32_t reserved_329; // offset: 329  (0x149)
	uint32_t reserved_330; // offset: 330  (0x14A)
	uint32_t reserved_331; // offset: 331  (0x14B)
	uint32_t reserved_332; // offset: 332  (0x14C)
	uint32_t reserved_333; // offset: 333  (0x14D)
	uint32_t reserved_334; // offset: 334  (0x14E)
	uint32_t reserved_335; // offset: 335  (0x14F)
	uint32_t reserved_336; // offset: 336  (0x150)
	uint32_t reserved_337; // offset: 337  (0x151)
	uint32_t reserved_338; // offset: 338  (0x152)
	uint32_t reserved_339; // offset: 339  (0x153)
	uint32_t reserved_340; // offset: 340  (0x154)
	uint32_t reserved_341; // offset: 341  (0x155)
	uint32_t reserved_342; // offset: 342  (0x156)
	uint32_t reserved_343; // offset: 343  (0x157)
	uint32_t reserved_344; // offset: 344  (0x158)
	uint32_t reserved_345; // offset: 345  (0x159)
	uint32_t reserved_346; // offset: 346  (0x15A)
	uint32_t reserved_347; // offset: 347  (0x15B)
	uint32_t reserved_348; // offset: 348  (0x15C)
	uint32_t reserved_349; // offset: 349  (0x15D)
	uint32_t reserved_350; // offset: 350  (0x15E)
	uint32_t reserved_351; // offset: 351  (0x15F)
	uint32_t reserved_352; // offset: 352  (0x160)
	uint32_t reserved_353; // offset: 353  (0x161)
	uint32_t reserved_354; // offset: 354  (0x162)
	uint32_t reserved_355; // offset: 355  (0x163)
	uint32_t spi_shader_pgm_rsrc3_ps; // offset: 356  (0x164)
	uint32_t spi_shader_pgm_rsrc3_vs; // offset: 357  (0x165)
	uint32_t spi_shader_pgm_rsrc3_gs; // offset: 358  (0x166)
	uint32_t spi_shader_pgm_rsrc3_hs; // offset: 359  (0x167)
	uint32_t spi_shader_pgm_rsrc4_ps; // offset: 360  (0x168)
	uint32_t spi_shader_pgm_rsrc4_vs; // offset: 361  (0x169)
	uint32_t spi_shader_pgm_rsrc4_gs; // offset: 362  (0x16A)
	uint32_t spi_shader_pgm_rsrc4_hs; // offset: 363  (0x16B)
	uint32_t db_occlusion_count0_low_00; // offset: 364  (0x16C)
	uint32_t db_occlusion_count0_hi_00; // offset: 365  (0x16D)
	uint32_t db_occlusion_count1_low_00; // offset: 366  (0x16E)
	uint32_t db_occlusion_count1_hi_00; // offset: 367  (0x16F)
	uint32_t db_occlusion_count2_low_00; // offset: 368  (0x170)
	uint32_t db_occlusion_count2_hi_00; // offset: 369  (0x171)
	uint32_t db_occlusion_count3_low_00; // offset: 370  (0x172)
	uint32_t db_occlusion_count3_hi_00; // offset: 371  (0x173)
	uint32_t db_occlusion_count0_low_01; // offset: 372  (0x174)
	uint32_t db_occlusion_count0_hi_01; // offset: 373  (0x175)
	uint32_t db_occlusion_count1_low_01; // offset: 374  (0x176)
	uint32_t db_occlusion_count1_hi_01; // offset: 375  (0x177)
	uint32_t db_occlusion_count2_low_01; // offset: 376  (0x178)
	uint32_t db_occlusion_count2_hi_01; // offset: 377  (0x179)
	uint32_t db_occlusion_count3_low_01; // offset: 378  (0x17A)
	uint32_t db_occlusion_count3_hi_01; // offset: 379  (0x17B)
	uint32_t db_occlusion_count0_low_02; // offset: 380  (0x17C)
	uint32_t db_occlusion_count0_hi_02; // offset: 381  (0x17D)
	uint32_t db_occlusion_count1_low_02; // offset: 382  (0x17E)
	uint32_t db_occlusion_count1_hi_02; // offset: 383  (0x17F)
	uint32_t db_occlusion_count2_low_02; // offset: 384  (0x180)
	uint32_t db_occlusion_count2_hi_02; // offset: 385  (0x181)
	uint32_t db_occlusion_count3_low_02; // offset: 386  (0x182)
	uint32_t db_occlusion_count3_hi_02; // offset: 387  (0x183)
	uint32_t db_occlusion_count0_low_03; // offset: 388  (0x184)
	uint32_t db_occlusion_count0_hi_03; // offset: 389  (0x185)
	uint32_t db_occlusion_count1_low_03; // offset: 390  (0x186)
	uint32_t db_occlusion_count1_hi_03; // offset: 391  (0x187)
	uint32_t db_occlusion_count2_low_03; // offset: 392  (0x188)
	uint32_t db_occlusion_count2_hi_03; // offset: 393  (0x189)
	uint32_t db_occlusion_count3_low_03; // offset: 394  (0x18A)
	uint32_t db_occlusion_count3_hi_03; // offset: 395  (0x18B)
	uint32_t db_occlusion_count0_low_04; // offset: 396  (0x18C)
	uint32_t db_occlusion_count0_hi_04; // offset: 397  (0x18D)
	uint32_t db_occlusion_count1_low_04; // offset: 398  (0x18E)
	uint32_t db_occlusion_count1_hi_04; // offset: 399  (0x18F)
	uint32_t db_occlusion_count2_low_04; // offset: 400  (0x190)
	uint32_t db_occlusion_count2_hi_04; // offset: 401  (0x191)
	uint32_t db_occlusion_count3_low_04; // offset: 402  (0x192)
	uint32_t db_occlusion_count3_hi_04; // offset: 403  (0x193)
	uint32_t db_occlusion_count0_low_05; // offset: 404  (0x194)
	uint32_t db_occlusion_count0_hi_05; // offset: 405  (0x195)
	uint32_t db_occlusion_count1_low_05; // offset: 406  (0x196)
	uint32_t db_occlusion_count1_hi_05; // offset: 407  (0x197)
	uint32_t db_occlusion_count2_low_05; // offset: 408  (0x198)
	uint32_t db_occlusion_count2_hi_05; // offset: 409  (0x199)
	uint32_t db_occlusion_count3_low_05; // offset: 410  (0x19A)
	uint32_t db_occlusion_count3_hi_05; // offset: 411  (0x19B)
	uint32_t db_occlusion_count0_low_06; // offset: 412  (0x19C)
	uint32_t db_occlusion_count0_hi_06; // offset: 413  (0x19D)
	uint32_t db_occlusion_count1_low_06; // offset: 414  (0x19E)
	uint32_t db_occlusion_count1_hi_06; // offset: 415  (0x19F)
	uint32_t db_occlusion_count2_low_06; // offset: 416  (0x1A0)
	uint32_t db_occlusion_count2_hi_06; // offset: 417  (0x1A1)
	uint32_t db_occlusion_count3_low_06; // offset: 418  (0x1A2)
	uint32_t db_occlusion_count3_hi_06; // offset: 419  (0x1A3)
	uint32_t db_occlusion_count0_low_07; // offset: 420  (0x1A4)
	uint32_t db_occlusion_count0_hi_07; // offset: 421  (0x1A5)
	uint32_t db_occlusion_count1_low_07; // offset: 422  (0x1A6)
	uint32_t db_occlusion_count1_hi_07; // offset: 423  (0x1A7)
	uint32_t db_occlusion_count2_low_07; // offset: 424  (0x1A8)
	uint32_t db_occlusion_count2_hi_07; // offset: 425  (0x1A9)
	uint32_t db_occlusion_count3_low_07; // offset: 426  (0x1AA)
	uint32_t db_occlusion_count3_hi_07; // offset: 427  (0x1AB)
	uint32_t db_occlusion_count0_low_10; // offset: 428  (0x1AC)
	uint32_t db_occlusion_count0_hi_10; // offset: 429  (0x1AD)
	uint32_t db_occlusion_count1_low_10; // offset: 430  (0x1AE)
	uint32_t db_occlusion_count1_hi_10; // offset: 431  (0x1AF)
	uint32_t db_occlusion_count2_low_10; // offset: 432  (0x1B0)
	uint32_t db_occlusion_count2_hi_10; // offset: 433  (0x1B1)
	uint32_t db_occlusion_count3_low_10; // offset: 434  (0x1B2)
	uint32_t db_occlusion_count3_hi_10; // offset: 435  (0x1B3)
	uint32_t db_occlusion_count0_low_11; // offset: 436  (0x1B4)
	uint32_t db_occlusion_count0_hi_11; // offset: 437  (0x1B5)
	uint32_t db_occlusion_count1_low_11; // offset: 438  (0x1B6)
	uint32_t db_occlusion_count1_hi_11; // offset: 439  (0x1B7)
	uint32_t db_occlusion_count2_low_11; // offset: 440  (0x1B8)
	uint32_t db_occlusion_count2_hi_11; // offset: 441  (0x1B9)
	uint32_t db_occlusion_count3_low_11; // offset: 442  (0x1BA)
	uint32_t db_occlusion_count3_hi_11; // offset: 443  (0x1BB)
	uint32_t db_occlusion_count0_low_12; // offset: 444  (0x1BC)
	uint32_t db_occlusion_count0_hi_12; // offset: 445  (0x1BD)
	uint32_t db_occlusion_count1_low_12; // offset: 446  (0x1BE)
	uint32_t db_occlusion_count1_hi_12; // offset: 447  (0x1BF)
	uint32_t db_occlusion_count2_low_12; // offset: 448  (0x1C0)
	uint32_t db_occlusion_count2_hi_12; // offset: 449  (0x1C1)
	uint32_t db_occlusion_count3_low_12; // offset: 450  (0x1C2)
	uint32_t db_occlusion_count3_hi_12; // offset: 451  (0x1C3)
	uint32_t db_occlusion_count0_low_13; // offset: 452  (0x1C4)
	uint32_t db_occlusion_count0_hi_13; // offset: 453  (0x1C5)
	uint32_t db_occlusion_count1_low_13; // offset: 454  (0x1C6)
	uint32_t db_occlusion_count1_hi_13; // offset: 455  (0x1C7)
	uint32_t db_occlusion_count2_low_13; // offset: 456  (0x1C8)
	uint32_t db_occlusion_count2_hi_13; // offset: 457  (0x1C9)
	uint32_t db_occlusion_count3_low_13; // offset: 458  (0x1CA)
	uint32_t db_occlusion_count3_hi_13; // offset: 459  (0x1CB)
	uint32_t db_occlusion_count0_low_14; // offset: 460  (0x1CC)
	uint32_t db_occlusion_count0_hi_14; // offset: 461  (0x1CD)
	uint32_t db_occlusion_count1_low_14; // offset: 462  (0x1CE)
	uint32_t db_occlusion_count1_hi_14; // offset: 463  (0x1CF)
	uint32_t db_occlusion_count2_low_14; // offset: 464  (0x1D0)
	uint32_t db_occlusion_count2_hi_14; // offset: 465  (0x1D1)
	uint32_t db_occlusion_count3_low_14; // offset: 466  (0x1D2)
	uint32_t db_occlusion_count3_hi_14; // offset: 467  (0x1D3)
	uint32_t db_occlusion_count0_low_15; // offset: 468  (0x1D4)
	uint32_t db_occlusion_count0_hi_15; // offset: 469  (0x1D5)
	uint32_t db_occlusion_count1_low_15; // offset: 470  (0x1D6)
	uint32_t db_occlusion_count1_hi_15; // offset: 471  (0x1D7)
	uint32_t db_occlusion_count2_low_15; // offset: 472  (0x1D8)
	uint32_t db_occlusion_count2_hi_15; // offset: 473  (0x1D9)
	uint32_t db_occlusion_count3_low_15; // offset: 474  (0x1DA)
	uint32_t db_occlusion_count3_hi_15; // offset: 475  (0x1DB)
	uint32_t db_occlusion_count0_low_16; // offset: 476  (0x1DC)
	uint32_t db_occlusion_count0_hi_16; // offset: 477  (0x1DD)
	uint32_t db_occlusion_count1_low_16; // offset: 478  (0x1DE)
	uint32_t db_occlusion_count1_hi_16; // offset: 479  (0x1DF)
	uint32_t db_occlusion_count2_low_16; // offset: 480  (0x1E0)
	uint32_t db_occlusion_count2_hi_16; // offset: 481  (0x1E1)
	uint32_t db_occlusion_count3_low_16; // offset: 482  (0x1E2)
	uint32_t db_occlusion_count3_hi_16; // offset: 483  (0x1E3)
	uint32_t db_occlusion_count0_low_17; // offset: 484  (0x1E4)
	uint32_t db_occlusion_count0_hi_17; // offset: 485  (0x1E5)
	uint32_t db_occlusion_count1_low_17; // offset: 486  (0x1E6)
	uint32_t db_occlusion_count1_hi_17; // offset: 487  (0x1E7)
	uint32_t db_occlusion_count2_low_17; // offset: 488  (0x1E8)
	uint32_t db_occlusion_count2_hi_17; // offset: 489  (0x1E9)
	uint32_t db_occlusion_count3_low_17; // offset: 490  (0x1EA)
	uint32_t db_occlusion_count3_hi_17; // offset: 491  (0x1EB)
	uint32_t reserved_492; // offset: 492  (0x1EC)
	uint32_t reserved_493; // offset: 493  (0x1ED)
	uint32_t reserved_494; // offset: 494  (0x1EE)
	uint32_t reserved_495; // offset: 495  (0x1EF)
	uint32_t reserved_496; // offset: 496  (0x1F0)
	uint32_t reserved_497; // offset: 497  (0x1F1)
	uint32_t reserved_498; // offset: 498  (0x1F2)
	uint32_t reserved_499; // offset: 499  (0x1F3)
	uint32_t reserved_500; // offset: 500  (0x1F4)
	uint32_t reserved_501; // offset: 501  (0x1F5)
	uint32_t reserved_502; // offset: 502  (0x1F6)
	uint32_t reserved_503; // offset: 503  (0x1F7)
	uint32_t reserved_504; // offset: 504  (0x1F8)
	uint32_t reserved_505; // offset: 505  (0x1F9)
	uint32_t reserved_506; // offset: 506  (0x1FA)
	uint32_t reserved_507; // offset: 507  (0x1FB)
	uint32_t reserved_508; // offset: 508  (0x1FC)
	uint32_t reserved_509; // offset: 509  (0x1FD)
	uint32_t reserved_510; // offset: 510  (0x1FE)
	uint32_t reserved_511; // offset: 511  (0x1FF)
};

struct v10_sdma_mqd {
	uint32_t sdmax_rlcx_rb_cntl;
	uint32_t sdmax_rlcx_rb_base;
	uint32_t sdmax_rlcx_rb_base_hi;
	uint32_t sdmax_rlcx_rb_rptr;
	uint32_t sdmax_rlcx_rb_rptr_hi;
	uint32_t sdmax_rlcx_rb_wptr;
	uint32_t sdmax_rlcx_rb_wptr_hi;
	uint32_t sdmax_rlcx_rb_wptr_poll_cntl;
	uint32_t sdmax_rlcx_rb_rptr_addr_hi;
	uint32_t sdmax_rlcx_rb_rptr_addr_lo;
	uint32_t sdmax_rlcx_ib_cntl;
	uint32_t sdmax_rlcx_ib_rptr;
	uint32_t sdmax_rlcx_ib_offset;
	uint32_t sdmax_rlcx_ib_base_lo;
	uint32_t sdmax_rlcx_ib_base_hi;
	uint32_t sdmax_rlcx_ib_size;
	uint32_t sdmax_rlcx_skip_cntl;
	uint32_t sdmax_rlcx_context_status;
	uint32_t sdmax_rlcx_doorbell;
	uint32_t sdmax_rlcx_status;
	uint32_t sdmax_rlcx_doorbell_log;
	uint32_t sdmax_rlcx_watermark;
	uint32_t sdmax_rlcx_doorbell_offset;
	uint32_t sdmax_rlcx_csa_addr_lo;
	uint32_t sdmax_rlcx_csa_addr_hi;
	uint32_t sdmax_rlcx_ib_sub_remain;
	uint32_t sdmax_rlcx_preempt;
	uint32_t sdmax_rlcx_dummy_reg;
	uint32_t sdmax_rlcx_rb_wptr_poll_addr_hi;
	uint32_t sdmax_rlcx_rb_wptr_poll_addr_lo;
	uint32_t sdmax_rlcx_rb_aql_cntl;
	uint32_t sdmax_rlcx_minor_ptr_update;
	uint32_t sdmax_rlcx_midcmd_data0;
	uint32_t sdmax_rlcx_midcmd_data1;
	uint32_t sdmax_rlcx_midcmd_data2;
	uint32_t sdmax_rlcx_midcmd_data3;
	uint32_t sdmax_rlcx_midcmd_data4;
	uint32_t sdmax_rlcx_midcmd_data5;
	uint32_t sdmax_rlcx_midcmd_data6;
	uint32_t sdmax_rlcx_midcmd_data7;
	uint32_t sdmax_rlcx_midcmd_data8;
	uint32_t sdmax_rlcx_midcmd_cntl;
	uint32_t reserved_42;
	uint32_t reserved_43;
	uint32_t reserved_44;
	uint32_t reserved_45;
	uint32_t reserved_46;
	uint32_t reserved_47;
	uint32_t reserved_48;
	uint32_t reserved_49;
	uint32_t reserved_50;
	uint32_t reserved_51;
	uint32_t reserved_52;
	uint32_t reserved_53;
	uint32_t reserved_54;
	uint32_t reserved_55;
	uint32_t reserved_56;
	uint32_t reserved_57;
	uint32_t reserved_58;
	uint32_t reserved_59;
	uint32_t reserved_60;
	uint32_t reserved_61;
	uint32_t reserved_62;
	uint32_t reserved_63;
	uint32_t reserved_64;
	uint32_t reserved_65;
	uint32_t reserved_66;
	uint32_t reserved_67;
	uint32_t reserved_68;
	uint32_t reserved_69;
	uint32_t reserved_70;
	uint32_t reserved_71;
	uint32_t reserved_72;
	uint32_t reserved_73;
	uint32_t reserved_74;
	uint32_t reserved_75;
	uint32_t reserved_76;
	uint32_t reserved_77;
	uint32_t reserved_78;
	uint32_t reserved_79;
	uint32_t reserved_80;
	uint32_t reserved_81;
	uint32_t reserved_82;
	uint32_t reserved_83;
	uint32_t reserved_84;
	uint32_t reserved_85;
	uint32_t reserved_86;
	uint32_t reserved_87;
	uint32_t reserved_88;
	uint32_t reserved_89;
	uint32_t reserved_90;
	uint32_t reserved_91;
	uint32_t reserved_92;
	uint32_t reserved_93;
	uint32_t reserved_94;
	uint32_t reserved_95;
	uint32_t reserved_96;
	uint32_t reserved_97;
	uint32_t reserved_98;
	uint32_t reserved_99;
	uint32_t reserved_100;
	uint32_t reserved_101;
	uint32_t reserved_102;
	uint32_t reserved_103;
	uint32_t reserved_104;
	uint32_t reserved_105;
	uint32_t reserved_106;
	uint32_t reserved_107;
	uint32_t reserved_108;
	uint32_t reserved_109;
	uint32_t reserved_110;
	uint32_t reserved_111;
	uint32_t reserved_112;
	uint32_t reserved_113;
	uint32_t reserved_114;
	uint32_t reserved_115;
	uint32_t reserved_116;
	uint32_t reserved_117;
	uint32_t reserved_118;
	uint32_t reserved_119;
	uint32_t reserved_120;
	uint32_t reserved_121;
	uint32_t reserved_122;
	uint32_t reserved_123;
	uint32_t reserved_124;
	uint32_t reserved_125;
	uint32_t reserved_126;
	uint32_t reserved_127;
	uint32_t sdma_engine_id;
	uint32_t sdma_queue_id;
};

struct v10_compute_mqd {
	uint32_t header;
	uint32_t compute_dispatch_initiator;
	uint32_t compute_dim_x;
	uint32_t compute_dim_y;
	uint32_t compute_dim_z;
	uint32_t compute_start_x;
	uint32_t compute_start_y;
	uint32_t compute_start_z;
	uint32_t compute_num_thread_x;
	uint32_t compute_num_thread_y;
	uint32_t compute_num_thread_z;
	uint32_t compute_pipelinestat_enable;
	uint32_t compute_perfcount_enable;
	uint32_t compute_pgm_lo;
	uint32_t compute_pgm_hi;
	uint32_t compute_tba_lo;
	uint32_t compute_tba_hi;
	uint32_t compute_tma_lo;
	uint32_t compute_tma_hi;
	uint32_t compute_pgm_rsrc1;
	uint32_t compute_pgm_rsrc2;
	uint32_t compute_vmid;
	uint32_t compute_resource_limits;
	uint32_t compute_static_thread_mgmt_se0;
	uint32_t compute_static_thread_mgmt_se1;
	uint32_t compute_tmpring_size;
	uint32_t compute_static_thread_mgmt_se2;
	uint32_t compute_static_thread_mgmt_se3;
	uint32_t compute_restart_x;
	uint32_t compute_restart_y;
	uint32_t compute_restart_z;
	uint32_t compute_thread_trace_enable;
	uint32_t compute_misc_reserved;
	uint32_t compute_dispatch_id;
	uint32_t compute_threadgroup_id;
	uint32_t compute_relaunch;
	uint32_t compute_wave_restore_addr_lo;
	uint32_t compute_wave_restore_addr_hi;
	uint32_t compute_wave_restore_control;
	uint32_t reserved_39;
	uint32_t reserved_40;
	uint32_t reserved_41;
	uint32_t reserved_42;
	uint32_t reserved_43;
	uint32_t reserved_44;
	uint32_t reserved_45;
	uint32_t reserved_46;
	uint32_t reserved_47;
	uint32_t reserved_48;
	uint32_t reserved_49;
	uint32_t reserved_50;
	uint32_t reserved_51;
	uint32_t reserved_52;
	uint32_t reserved_53;
	uint32_t reserved_54;
	uint32_t reserved_55;
	uint32_t reserved_56;
	uint32_t reserved_57;
	uint32_t reserved_58;
	uint32_t reserved_59;
	uint32_t reserved_60;
	uint32_t reserved_61;
	uint32_t reserved_62;
	uint32_t reserved_63;
	uint32_t reserved_64;
	uint32_t compute_user_data_0;
	uint32_t compute_user_data_1;
	uint32_t compute_user_data_2;
	uint32_t compute_user_data_3;
	uint32_t compute_user_data_4;
	uint32_t compute_user_data_5;
	uint32_t compute_user_data_6;
	uint32_t compute_user_data_7;
	uint32_t compute_user_data_8;
	uint32_t compute_user_data_9;
	uint32_t compute_user_data_10;
	uint32_t compute_user_data_11;
	uint32_t compute_user_data_12;
	uint32_t compute_user_data_13;
	uint32_t compute_user_data_14;
	uint32_t compute_user_data_15;
	uint32_t cp_compute_csinvoc_count_lo;
	uint32_t cp_compute_csinvoc_count_hi;
	uint32_t reserved_83;
	uint32_t reserved_84;
	uint32_t reserved_85;
	uint32_t cp_mqd_query_time_lo;
	uint32_t cp_mqd_query_time_hi;
	uint32_t cp_mqd_connect_start_time_lo;
	uint32_t cp_mqd_connect_start_time_hi;
	uint32_t cp_mqd_connect_end_time_lo;
	uint32_t cp_mqd_connect_end_time_hi;
	uint32_t cp_mqd_connect_end_wf_count;
	uint32_t cp_mqd_connect_end_pq_rptr;
	uint32_t cp_mqd_connect_end_pq_wptr;
	uint32_t cp_mqd_connect_end_ib_rptr;
	uint32_t cp_mqd_readindex_lo;
	uint32_t cp_mqd_readindex_hi;
	uint32_t cp_mqd_save_start_time_lo;
	uint32_t cp_mqd_save_start_time_hi;
	uint32_t cp_mqd_save_end_time_lo;
	uint32_t cp_mqd_save_end_time_hi;
	uint32_t cp_mqd_restore_start_time_lo;
	uint32_t cp_mqd_restore_start_time_hi;
	uint32_t cp_mqd_restore_end_time_lo;
	uint32_t cp_mqd_restore_end_time_hi;
	uint32_t disable_queue;
	uint32_t reserved_107;
	uint32_t gds_cs_ctxsw_cnt0;
	uint32_t gds_cs_ctxsw_cnt1;
	uint32_t gds_cs_ctxsw_cnt2;
	uint32_t gds_cs_ctxsw_cnt3;
	uint32_t reserved_112;
	uint32_t reserved_113;
	uint32_t cp_pq_exe_status_lo;
	uint32_t cp_pq_exe_status_hi;
	uint32_t cp_packet_id_lo;
	uint32_t cp_packet_id_hi;
	uint32_t cp_packet_exe_status_lo;
	uint32_t cp_packet_exe_status_hi;
	uint32_t gds_save_base_addr_lo;
	uint32_t gds_save_base_addr_hi;
	uint32_t gds_save_mask_lo;
	uint32_t gds_save_mask_hi;
	uint32_t ctx_save_base_addr_lo;
	uint32_t ctx_save_base_addr_hi;
	uint32_t reserved_126;
	uint32_t reserved_127;
	uint32_t cp_mqd_base_addr_lo;
	uint32_t cp_mqd_base_addr_hi;
	uint32_t cp_hqd_active;
	uint32_t cp_hqd_vmid;
	uint32_t cp_hqd_persistent_state;
	uint32_t cp_hqd_pipe_priority;
	uint32_t cp_hqd_queue_priority;
	uint32_t cp_hqd_quantum;
	uint32_t cp_hqd_pq_base_lo;
	uint32_t cp_hqd_pq_base_hi;
	uint32_t cp_hqd_pq_rptr;
	uint32_t cp_hqd_pq_rptr_report_addr_lo;
	uint32_t cp_hqd_pq_rptr_report_addr_hi;
	uint32_t cp_hqd_pq_wptr_poll_addr_lo;
	uint32_t cp_hqd_pq_wptr_poll_addr_hi;
	uint32_t cp_hqd_pq_doorbell_control;
	uint32_t reserved_144;
	uint32_t cp_hqd_pq_control;
	uint32_t cp_hqd_ib_base_addr_lo;
	uint32_t cp_hqd_ib_base_addr_hi;
	uint32_t cp_hqd_ib_rptr;
	uint32_t cp_hqd_ib_control;
	uint32_t cp_hqd_iq_timer;
	uint32_t cp_hqd_iq_rptr;
	uint32_t cp_hqd_dequeue_request;
	uint32_t cp_hqd_dma_offload;
	uint32_t cp_hqd_sema_cmd;
	uint32_t cp_hqd_msg_type;
	uint32_t cp_hqd_atomic0_preop_lo;
	uint32_t cp_hqd_atomic0_preop_hi;
	uint32_t cp_hqd_atomic1_preop_lo;
	uint32_t cp_hqd_atomic1_preop_hi;
	uint32_t cp_hqd_hq_scheduler0;
	uint32_t cp_hqd_hq_scheduler1;
	uint32_t cp_mqd_control;
	uint32_t cp_hqd_hq_status1;
	uint32_t cp_hqd_hq_control1;
	uint32_t cp_hqd_eop_base_addr_lo;
	uint32_t cp_hqd_eop_base_addr_hi;
	uint32_t cp_hqd_eop_control;
	uint32_t cp_hqd_eop_rptr;
	uint32_t cp_hqd_eop_wptr;
	uint32_t cp_hqd_eop_done_events;
	uint32_t cp_hqd_ctx_save_base_addr_lo;
	uint32_t cp_hqd_ctx_save_base_addr_hi;
	uint32_t cp_hqd_ctx_save_control;
	uint32_t cp_hqd_cntl_stack_offset;
	uint32_t cp_hqd_cntl_stack_size;
	uint32_t cp_hqd_wg_state_offset;
	uint32_t cp_hqd_ctx_save_size;
	uint32_t cp_hqd_gds_resource_state;
	uint32_t cp_hqd_error;
	uint32_t cp_hqd_eop_wptr_mem;
	uint32_t cp_hqd_aql_control;
	uint32_t cp_hqd_pq_wptr_lo;
	uint32_t cp_hqd_pq_wptr_hi;
	uint32_t cp_hqd_suspend_cntl_stack_offset;
	uint32_t cp_hqd_suspend_cntl_stack_dw_cnt;
	uint32_t cp_hqd_suspend_wg_state_offset;
	uint32_t reserved_187;
	uint32_t reserved_188;
	uint32_t reserved_189;
	uint32_t reserved_190;
	uint32_t reserved_191;
	uint32_t iqtimer_pkt_header;
	uint32_t iqtimer_pkt_dw0;
	uint32_t iqtimer_pkt_dw1;
	uint32_t iqtimer_pkt_dw2;
	uint32_t iqtimer_pkt_dw3;
	uint32_t iqtimer_pkt_dw4;
	uint32_t iqtimer_pkt_dw5;
	uint32_t iqtimer_pkt_dw6;
	uint32_t iqtimer_pkt_dw7;
	uint32_t iqtimer_pkt_dw8;
	uint32_t iqtimer_pkt_dw9;
	uint32_t iqtimer_pkt_dw10;
	uint32_t iqtimer_pkt_dw11;
	uint32_t iqtimer_pkt_dw12;
	uint32_t iqtimer_pkt_dw13;
	uint32_t iqtimer_pkt_dw14;
	uint32_t iqtimer_pkt_dw15;
	uint32_t iqtimer_pkt_dw16;
	uint32_t iqtimer_pkt_dw17;
	uint32_t iqtimer_pkt_dw18;
	uint32_t iqtimer_pkt_dw19;
	uint32_t iqtimer_pkt_dw20;
	uint32_t iqtimer_pkt_dw21;
	uint32_t iqtimer_pkt_dw22;
	uint32_t iqtimer_pkt_dw23;
	uint32_t iqtimer_pkt_dw24;
	uint32_t iqtimer_pkt_dw25;
	uint32_t iqtimer_pkt_dw26;
	uint32_t iqtimer_pkt_dw27;
	uint32_t iqtimer_pkt_dw28;
	uint32_t iqtimer_pkt_dw29;
	uint32_t iqtimer_pkt_dw30;
	uint32_t iqtimer_pkt_dw31;
	uint32_t reserved_225;
	uint32_t reserved_226;
	uint32_t reserved_227;
	uint32_t set_resources_header;
	uint32_t set_resources_dw1;
	uint32_t set_resources_dw2;
	uint32_t set_resources_dw3;
	uint32_t set_resources_dw4;
	uint32_t set_resources_dw5;
	uint32_t set_resources_dw6;
	uint32_t set_resources_dw7;
	uint32_t reserved_236;
	uint32_t reserved_237;
	uint32_t reserved_238;
	uint32_t reserved_239;
	uint32_t queue_doorbell_id0;
	uint32_t queue_doorbell_id1;
	uint32_t queue_doorbell_id2;
	uint32_t queue_doorbell_id3;
	uint32_t queue_doorbell_id4;
	uint32_t queue_doorbell_id5;
	uint32_t queue_doorbell_id6;
	uint32_t queue_doorbell_id7;
	uint32_t queue_doorbell_id8;
	uint32_t queue_doorbell_id9;
	uint32_t queue_doorbell_id10;
	uint32_t queue_doorbell_id11;
	uint32_t queue_doorbell_id12;
	uint32_t queue_doorbell_id13;
	uint32_t queue_doorbell_id14;
	uint32_t queue_doorbell_id15;
	uint32_t reserved_256;
	uint32_t reserved_257;
	uint32_t reserved_258;
	uint32_t reserved_259;
	uint32_t reserved_260;
	uint32_t reserved_261;
	uint32_t reserved_262;
	uint32_t reserved_263;
	uint32_t reserved_264;
	uint32_t reserved_265;
	uint32_t reserved_266;
	uint32_t reserved_267;
	uint32_t reserved_268;
	uint32_t reserved_269;
	uint32_t reserved_270;
	uint32_t reserved_271;
	uint32_t reserved_272;
	uint32_t reserved_273;
	uint32_t reserved_274;
	uint32_t reserved_275;
	uint32_t reserved_276;
	uint32_t reserved_277;
	uint32_t reserved_278;
	uint32_t reserved_279;
	uint32_t reserved_280;
	uint32_t reserved_281;
	uint32_t reserved_282;
	uint32_t reserved_283;
	uint32_t reserved_284;
	uint32_t reserved_285;
	uint32_t reserved_286;
	uint32_t reserved_287;
	uint32_t reserved_288;
	uint32_t reserved_289;
	uint32_t reserved_290;
	uint32_t reserved_291;
	uint32_t reserved_292;
	uint32_t reserved_293;
	uint32_t reserved_294;
	uint32_t reserved_295;
	uint32_t reserved_296;
	uint32_t reserved_297;
	uint32_t reserved_298;
	uint32_t reserved_299;
	uint32_t reserved_300;
	uint32_t reserved_301;
	uint32_t reserved_302;
	uint32_t reserved_303;
	uint32_t reserved_304;
	uint32_t reserved_305;
	uint32_t reserved_306;
	uint32_t reserved_307;
	uint32_t reserved_308;
	uint32_t reserved_309;
	uint32_t reserved_310;
	uint32_t reserved_311;
	uint32_t reserved_312;
	uint32_t reserved_313;
	uint32_t reserved_314;
	uint32_t reserved_315;
	uint32_t reserved_316;
	uint32_t reserved_317;
	uint32_t reserved_318;
	uint32_t reserved_319;
	uint32_t reserved_320;
	uint32_t reserved_321;
	uint32_t reserved_322;
	uint32_t reserved_323;
	uint32_t reserved_324;
	uint32_t reserved_325;
	uint32_t reserved_326;
	uint32_t reserved_327;
	uint32_t reserved_328;
	uint32_t reserved_329;
	uint32_t reserved_330;
	uint32_t reserved_331;
	uint32_t reserved_332;
	uint32_t reserved_333;
	uint32_t reserved_334;
	uint32_t reserved_335;
	uint32_t reserved_336;
	uint32_t reserved_337;
	uint32_t reserved_338;
	uint32_t reserved_339;
	uint32_t reserved_340;
	uint32_t reserved_341;
	uint32_t reserved_342;
	uint32_t reserved_343;
	uint32_t reserved_344;
	uint32_t reserved_345;
	uint32_t reserved_346;
	uint32_t reserved_347;
	uint32_t reserved_348;
	uint32_t reserved_349;
	uint32_t reserved_350;
	uint32_t reserved_351;
	uint32_t reserved_352;
	uint32_t reserved_353;
	uint32_t reserved_354;
	uint32_t reserved_355;
	uint32_t reserved_356;
	uint32_t reserved_357;
	uint32_t reserved_358;
	uint32_t reserved_359;
	uint32_t reserved_360;
	uint32_t reserved_361;
	uint32_t reserved_362;
	uint32_t reserved_363;
	uint32_t reserved_364;
	uint32_t reserved_365;
	uint32_t reserved_366;
	uint32_t reserved_367;
	uint32_t reserved_368;
	uint32_t reserved_369;
	uint32_t reserved_370;
	uint32_t reserved_371;
	uint32_t reserved_372;
	uint32_t reserved_373;
	uint32_t reserved_374;
	uint32_t reserved_375;
	uint32_t reserved_376;
	uint32_t reserved_377;
	uint32_t reserved_378;
	uint32_t reserved_379;
	uint32_t reserved_380;
	uint32_t reserved_381;
	uint32_t reserved_382;
	uint32_t reserved_383;
	uint32_t reserved_384;
	uint32_t reserved_385;
	uint32_t reserved_386;
	uint32_t reserved_387;
	uint32_t reserved_388;
	uint32_t reserved_389;
	uint32_t reserved_390;
	uint32_t reserved_391;
	uint32_t reserved_392;
	uint32_t reserved_393;
	uint32_t reserved_394;
	uint32_t reserved_395;
	uint32_t reserved_396;
	uint32_t reserved_397;
	uint32_t reserved_398;
	uint32_t reserved_399;
	uint32_t reserved_400;
	uint32_t reserved_401;
	uint32_t reserved_402;
	uint32_t reserved_403;
	uint32_t reserved_404;
	uint32_t reserved_405;
	uint32_t reserved_406;
	uint32_t reserved_407;
	uint32_t reserved_408;
	uint32_t reserved_409;
	uint32_t reserved_410;
	uint32_t reserved_411;
	uint32_t reserved_412;
	uint32_t reserved_413;
	uint32_t reserved_414;
	uint32_t reserved_415;
	uint32_t reserved_416;
	uint32_t reserved_417;
	uint32_t reserved_418;
	uint32_t reserved_419;
	uint32_t reserved_420;
	uint32_t reserved_421;
	uint32_t reserved_422;
	uint32_t reserved_423;
	uint32_t reserved_424;
	uint32_t reserved_425;
	uint32_t reserved_426;
	uint32_t reserved_427;
	uint32_t reserved_428;
	uint32_t reserved_429;
	uint32_t reserved_430;
	uint32_t reserved_431;
	uint32_t reserved_432;
	uint32_t reserved_433;
	uint32_t reserved_434;
	uint32_t reserved_435;
	uint32_t reserved_436;
	uint32_t reserved_437;
	uint32_t reserved_438;
	uint32_t reserved_439;
	uint32_t reserved_440;
	uint32_t reserved_441;
	uint32_t reserved_442;
	uint32_t reserved_443;
	uint32_t reserved_444;
	uint32_t reserved_445;
	uint32_t reserved_446;
	uint32_t reserved_447;
	uint32_t reserved_448;
	uint32_t reserved_449;
	uint32_t reserved_450;
	uint32_t reserved_451;
	uint32_t reserved_452;
	uint32_t reserved_453;
	uint32_t reserved_454;
	uint32_t reserved_455;
	uint32_t reserved_456;
	uint32_t reserved_457;
	uint32_t reserved_458;
	uint32_t reserved_459;
	uint32_t reserved_460;
	uint32_t reserved_461;
	uint32_t reserved_462;
	uint32_t reserved_463;
	uint32_t reserved_464;
	uint32_t reserved_465;
	uint32_t reserved_466;
	uint32_t reserved_467;
	uint32_t reserved_468;
	uint32_t reserved_469;
	uint32_t reserved_470;
	uint32_t reserved_471;
	uint32_t reserved_472;
	uint32_t reserved_473;
	uint32_t reserved_474;
	uint32_t reserved_475;
	uint32_t reserved_476;
	uint32_t reserved_477;
	uint32_t reserved_478;
	uint32_t reserved_479;
	uint32_t reserved_480;
	uint32_t reserved_481;
	uint32_t reserved_482;
	uint32_t reserved_483;
	uint32_t reserved_484;
	uint32_t reserved_485;
	uint32_t reserved_486;
	uint32_t reserved_487;
	uint32_t reserved_488;
	uint32_t reserved_489;
	uint32_t reserved_490;
	uint32_t reserved_491;
	uint32_t reserved_492;
	uint32_t reserved_493;
	uint32_t reserved_494;
	uint32_t reserved_495;
	uint32_t reserved_496;
	uint32_t reserved_497;
	uint32_t reserved_498;
	uint32_t reserved_499;
	uint32_t reserved_500;
	uint32_t reserved_501;
	uint32_t reserved_502;
	uint32_t reserved_503;
	uint32_t reserved_504;
	uint32_t reserved_505;
	uint32_t reserved_506;
	uint32_t reserved_507;
	uint32_t reserved_508;
	uint32_t reserved_509;
	uint32_t reserved_510;
	uint32_t reserved_511;
};

struct v10_ce_ib_state {
	/* section of non chained ib part */
	uint32_t ce_ib_completion_status;
	uint32_t ce_constegnine_count;
	uint32_t ce_ibOffset_ib1;
	uint32_t ce_ibOffset_ib2;

	/* section of chained ib */
	uint32_t ce_chainib_addrlo_ib1;
	uint32_t ce_chainib_addrlo_ib2;
	uint32_t ce_chainib_addrhi_ib1;
	uint32_t ce_chainib_addrhi_ib2;
	uint32_t ce_chainib_size_ib1;
	uint32_t ce_chainib_size_ib2;
}; /* total 10 DWORD */

struct v10_de_ib_state {
	/* section of non chained ib part */
	uint32_t ib_completion_status;
	uint32_t de_constEngine_count;
	uint32_t ib_offset_ib1;
	uint32_t ib_offset_ib2;

	/* section of chained ib */
	uint32_t chain_ib_addrlo_ib1;
	uint32_t chain_ib_addrlo_ib2;
	uint32_t chain_ib_addrhi_ib1;
	uint32_t chain_ib_addrhi_ib2;
	uint32_t chain_ib_size_ib1;
	uint32_t chain_ib_size_ib2;

	/* section of non chained ib part */
	uint32_t preamble_begin_ib1;
	uint32_t preamble_begin_ib2;
	uint32_t preamble_end_ib1;
	uint32_t preamble_end_ib2;

	/* section of chained ib */
	uint32_t chain_ib_pream_addrlo_ib1;
	uint32_t chain_ib_pream_addrlo_ib2;
	uint32_t chain_ib_pream_addrhi_ib1;
	uint32_t chain_ib_pream_addrhi_ib2;

	/* section of non chained ib part */
	uint32_t draw_indirect_baseLo;
	uint32_t draw_indirect_baseHi;
	uint32_t disp_indirect_baseLo;
	uint32_t disp_indirect_baseHi;
	uint32_t gds_backup_addrlo;
	uint32_t gds_backup_addrhi;
	uint32_t index_base_addrlo;
	uint32_t index_base_addrhi;
	uint32_t sample_cntl;
}; /* Total of 27 DWORD */

struct v10_gfx_meta_data {
	/* 10 DWORD, address must be 4KB aligned */
	struct v10_ce_ib_state ce_payload;
	uint32_t reserved1[54];
	/* 27 DWORD, address must be 64B aligned */
	struct v10_de_ib_state de_payload;
	/* PFP IB base address which get pre-empted */
	uint32_t DeIbBaseAddrLo;
	uint32_t DeIbBaseAddrHi;
	uint32_t reserved2[931];
}; /* Total of 4K Bytes */

#endif /* V10_STRUCTS_H_ */
