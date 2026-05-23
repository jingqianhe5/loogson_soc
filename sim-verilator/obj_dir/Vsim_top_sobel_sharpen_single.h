// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim_top.h for the primary calling header

#ifndef VERILATED_VSIM_TOP_SOBEL_SHARPEN_SINGLE_H_
#define VERILATED_VSIM_TOP_SOBEL_SHARPEN_SINGLE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vsim_top__Syms;

class Vsim_top_sobel_sharpen_single final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(per_img_vsync,0,0);
        VL_IN8(per_img_href,0,0);
        VL_IN8(per_img_data,7,0);
        VL_IN8(per_img_de,0,0);
        VL_OUT8(post_img_vsync,0,0);
        VL_OUT8(post_img_href,0,0);
        VL_OUT8(post_img_data,7,0);
        VL_OUT8(post_img_de,0,0);
        CData/*7:0*/ __PVT__matrix_p11;
        CData/*7:0*/ __PVT__matrix_p12;
        CData/*7:0*/ __PVT__matrix_p13;
        CData/*7:0*/ __PVT__matrix_p21;
        CData/*7:0*/ __PVT__matrix_p22;
        CData/*7:0*/ __PVT__matrix_p23;
        CData/*7:0*/ __PVT__matrix_p31;
        CData/*7:0*/ __PVT__matrix_p32;
        CData/*7:0*/ __PVT__matrix_p33;
        CData/*7:0*/ __PVT__pixel_data2;
        CData/*1:0*/ __PVT__matrix_img_vsync_r2;
        CData/*1:0*/ __PVT__matrix_img_href_r2;
        CData/*1:0*/ __PVT__matrix_img_de_r2;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb;
        CData/*7:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly;
        CData/*1:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
        CData/*1:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__href;
        CData/*1:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__de;
        CData/*1:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag;
        CData/*1:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag;
        CData/*1:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
        CData/*1:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid;
        CData/*0:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c1;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c1;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c2;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c2;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c2;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c3;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c3;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit8_c3;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c3;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c4;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c4;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit8_c4;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit7_c4;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c4;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c5;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c5;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit8_c5;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit7_c5;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit6_c5;
    };
    struct {
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c5;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c6;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c6;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit8_c6;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit7_c6;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit6_c6;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit5_c6;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c6;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c7;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c7;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit8_c7;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit7_c7;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit6_c7;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit5_c7;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit4_c7;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c7;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c8;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c8;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit8_c8;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit7_c8;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit6_c8;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit5_c8;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit4_c8;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit3_c8;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c8;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit8_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit7_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit6_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit5_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit4_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit3_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit2_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c9;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit8_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit7_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit6_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit5_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit4_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit3_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit2_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit1_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c10;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit10_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit9_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit8_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit7_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit6_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit5_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit4_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit3_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit2_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit1_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__bit0_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__data_valid_c11;
        CData/*0:0*/ __PVT__u_sqrt__DOT__result_valid_c12;
        CData/*7:0*/ __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
        CData/*1:0*/ __Vdly__matrix_img_vsync_r2;
        CData/*1:0*/ __Vdly__matrix_img_href_r2;
        CData/*1:0*/ __Vdly__matrix_img_de_r2;
    };
    struct {
        SData/*9:0*/ __PVT__Gx_data_tmp1;
        SData/*9:0*/ __PVT__Gx_data_tmp2;
        SData/*9:0*/ __PVT__Gy_data_tmp1;
        SData/*9:0*/ __PVT__Gy_data_tmp2;
        SData/*10:0*/ __PVT__Gx_data;
        SData/*10:0*/ __PVT__Gy_data;
        SData/*11:0*/ __PVT__matrix_img_vsync_r1;
        SData/*11:0*/ __PVT__matrix_img_href_r1;
        SData/*11:0*/ __PVT__matrix_img_de_r1;
        SData/*11:0*/ __PVT__matrix_edge_flag_r1;
        SData/*11:0*/ __PVT__pixel_data1;
        SData/*10:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt;
        SData/*10:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt;
        SData/*10:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
        SData/*11:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count;
        SData/*10:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
        SData/*10:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
        SData/*11:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count;
        SData/*10:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
        SData/*10:0*/ __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
        SData/*10:0*/ __PVT__u_sqrt__DOT__result_c12;
        SData/*10:0*/ __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
        SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
        IData/*21:0*/ __PVT__Gx_square_data;
        IData/*21:0*/ __PVT__Gy_square_data;
        IData/*20:0*/ __PVT__G_square_data;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c1;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c2;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c3;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c4;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c5;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c6;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c7;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c8;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c9;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c10;
        IData/*22:0*/ __PVT__u_sqrt__DOT__data_c11;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_h048c5071__0;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_hc08f668b__0;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_h0b9866b6__0;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_hdb733ce7__0;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_h90e962dd__0;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_hd7dfd128__0;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_h548b70e6__0;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_h049024c3__0;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0;
        IData/*23:0*/ u_sqrt__DOT____VdfgTmp_hcb2dff5c__0;
        VlUnpacked<CData/*7:0*/, 12> __PVT__matrix_p22_r1;
        VlUnpacked<CData/*7:0*/, 1920> __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem;
        VlUnpacked<CData/*7:0*/, 1920> __PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vsim_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_top_sobel_sharpen_single(Vsim_top__Syms* symsp, const char* v__name);
    ~Vsim_top_sobel_sharpen_single();
    VL_UNCOPYABLE(Vsim_top_sobel_sharpen_single);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
