// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_robert_sharpen_single.h"

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__2(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__2\n"); );
    // Body
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata 
        = ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
            ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
           [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer]
            : 0U);
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    if (vlSelf->__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0) {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem[vlSelf->__Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0;
    }
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__4(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__4\n"); );
    // Body
    vlSelf->__PVT__matrix_img_vsync_r2 = vlSelf->__Vdly__matrix_img_vsync_r2;
    vlSelf->__PVT__matrix_img_href_r2 = vlSelf->__Vdly__matrix_img_href_r2;
    vlSelf->__PVT__matrix_img_de_r2 = vlSelf->__Vdly__matrix_img_de_r2;
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__0(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__0\n"); );
    // Body
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid));
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__1(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__1\n"); );
    // Body
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb 
        = ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
           & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb 
        = (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
            & (1U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
           | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb 
        = ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
           | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__2(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_comb__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__2\n"); );
    // Body
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid 
        = ((~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)) 
           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid 
        = ((~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)) 
           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb));
}
