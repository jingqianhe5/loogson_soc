// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top__Syms.h"
#include "Vsim_top_robert_sharpen_single.h"

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__0(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__0\n"); );
    // Init
    CData/*7:0*/ u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
    u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 = 0;
    CData/*7:0*/ u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
    u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v0;
    __Vdlyvval__matrix_p22_r1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v1;
    __Vdlyvval__matrix_p22_r1__v1 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v2;
    __Vdlyvval__matrix_p22_r1__v2 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v3;
    __Vdlyvval__matrix_p22_r1__v3 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v4;
    __Vdlyvval__matrix_p22_r1__v4 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v5;
    __Vdlyvval__matrix_p22_r1__v5 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v6;
    __Vdlyvval__matrix_p22_r1__v6 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v7;
    __Vdlyvval__matrix_p22_r1__v7 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v8;
    __Vdlyvval__matrix_p22_r1__v8 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v9;
    __Vdlyvval__matrix_p22_r1__v9 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v10;
    __Vdlyvval__matrix_p22_r1__v10 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v11;
    __Vdlyvval__matrix_p22_r1__v11 = 0;
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer = 0;
    SData/*10:0*/ __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full = 0;
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer = 0;
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer = 0;
    // Body
    vlSelf->__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 = 0U;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
    __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0U;
    u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 
        = (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
            & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)))
            ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata)
            : ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))
                ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
               [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer]
                : 0U));
    if ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))) {
        vlSelf->__Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 
            = u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
        vlSelf->__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 
            = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    }
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count 
            = (0xfffU & ((2U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid)))
                          ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)
                              ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count)
                              : ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count)))
                          : ((1U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid) 
                                      << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid)))
                              ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)
                                  ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count)
                                  : ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count) 
                                     - (IData)(1U)))
                              : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count))));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count 
            = (0xfffU & ((2U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid)))
                          ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)
                              ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count)
                              : ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count)))
                          : ((1U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid) 
                                      << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid)))
                              ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)
                                  ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count)
                                  : ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count) 
                                     - (IData)(1U)))
                              : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer)));
        vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer)));
    } else {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer = 0U;
        vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer = 0U;
    }
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty 
        = (1U & ((~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn)) 
                 | ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer)) 
                        & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))) 
                       | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer) 
                          == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer) 
                                        - (IData)(1U))))) 
                      & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb)) 
                     & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb))) 
                    | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty) 
                           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb))) 
                       & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)))));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
           & ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer)) 
                  & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))) 
                 | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer) 
                    == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer) 
                                  - (IData)(1U))))) 
                & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb)) 
               & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb))) 
              | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full) 
                     & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb))) 
                 & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full))));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty 
        = (1U & ((~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn)) 
                 | ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer)) 
                        & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))) 
                       | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer) 
                          == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer) 
                                        - (IData)(1U))))) 
                      & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb)) 
                     & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid))) 
                    | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty) 
                           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid))) 
                       & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)))));
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
           & ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer)) 
                  & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))) 
                 | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer) 
                    == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer) 
                                  - (IData)(1U))))) 
                & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid)) 
               & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb))) 
              | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full) 
                     & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb))) 
                 & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full))));
    __Vdlyvval__matrix_p22_r1__v0 = vlSelf->__PVT__matrix_p22;
    __Vdlyvval__matrix_p22_r1__v1 = vlSelf->__PVT__matrix_p22_r1
        [0U];
    __Vdlyvval__matrix_p22_r1__v2 = vlSelf->__PVT__matrix_p22_r1
        [1U];
    __Vdlyvval__matrix_p22_r1__v3 = vlSelf->__PVT__matrix_p22_r1
        [2U];
    __Vdlyvval__matrix_p22_r1__v4 = vlSelf->__PVT__matrix_p22_r1
        [3U];
    __Vdlyvval__matrix_p22_r1__v5 = vlSelf->__PVT__matrix_p22_r1
        [4U];
    __Vdlyvval__matrix_p22_r1__v6 = vlSelf->__PVT__matrix_p22_r1
        [5U];
    __Vdlyvval__matrix_p22_r1__v7 = vlSelf->__PVT__matrix_p22_r1
        [6U];
    __Vdlyvval__matrix_p22_r1__v8 = vlSelf->__PVT__matrix_p22_r1
        [7U];
    __Vdlyvval__matrix_p22_r1__v9 = vlSelf->__PVT__matrix_p22_r1
        [8U];
    __Vdlyvval__matrix_p22_r1__v10 = vlSelf->__PVT__matrix_p22_r1
        [9U];
    __Vdlyvval__matrix_p22_r1__v11 = vlSelf->__PVT__matrix_p22_r1
        [0xaU];
    u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 
        = (0xffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                     & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)))
                     ? (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data 
                        >> 0x10U) : ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))
                                      ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
                                     [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer]
                                      : 0U)));
    if ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))) {
        __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 
            = u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
        __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 
            = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    }
    vlSelf->__PVT__u_sqrt__DOT__result_valid_c12 = 
        ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
         & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c11));
    vlSelf->__PVT__pixel_data2 = ((0xffU < (IData)(vlSelf->__PVT__pixel_data1))
                                   ? 0xffU : (0xffU 
                                              & (IData)(vlSelf->__PVT__pixel_data1)));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
    if (__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0) {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem[__Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0] 
            = __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    }
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c11 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                  & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c10));
    vlSelf->__PVT__pixel_data1 = (0x7ffU & ((0x800U 
                                             & (IData)(vlSelf->__PVT__matrix_edge_flag_r1))
                                             ? vlSelf->__PVT__matrix_p22_r1
                                            [0xbU] : 
                                            (vlSelf->__PVT__matrix_p22_r1
                                             [0xbU] 
                                             + (IData)(vlSelf->__PVT__u_sqrt__DOT__result_c12))));
    vlSelf->__PVT__matrix_p22_r1[0U] = __Vdlyvval__matrix_p22_r1__v0;
    vlSelf->__PVT__matrix_p22_r1[1U] = __Vdlyvval__matrix_p22_r1__v1;
    vlSelf->__PVT__matrix_p22_r1[2U] = __Vdlyvval__matrix_p22_r1__v2;
    vlSelf->__PVT__matrix_p22_r1[3U] = __Vdlyvval__matrix_p22_r1__v3;
    vlSelf->__PVT__matrix_p22_r1[4U] = __Vdlyvval__matrix_p22_r1__v4;
    vlSelf->__PVT__matrix_p22_r1[5U] = __Vdlyvval__matrix_p22_r1__v5;
    vlSelf->__PVT__matrix_p22_r1[6U] = __Vdlyvval__matrix_p22_r1__v6;
    vlSelf->__PVT__matrix_p22_r1[7U] = __Vdlyvval__matrix_p22_r1__v7;
    vlSelf->__PVT__matrix_p22_r1[8U] = __Vdlyvval__matrix_p22_r1__v8;
    vlSelf->__PVT__matrix_p22_r1[9U] = __Vdlyvval__matrix_p22_r1__v9;
    vlSelf->__PVT__matrix_p22_r1[0xaU] = __Vdlyvval__matrix_p22_r1__v10;
    vlSelf->__PVT__matrix_p22_r1[0xbU] = __Vdlyvval__matrix_p22_r1__v11;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c10 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                  & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c9));
    vlSelf->__PVT__u_sqrt__DOT__result_c12 = (0x7ffU 
                                              & (((0xffffffU 
                                                   & (vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0 
                                                      * vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0)) 
                                                  <= vlSelf->__PVT__u_sqrt__DOT__data_c11)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                       << 9U) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                          << 8U) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                             << 7U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11))))))))))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11)))))))))))));
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c9 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c8));
    vlSelf->__PVT__u_sqrt__DOT__data_c11 = vlSelf->__PVT__u_sqrt__DOT__data_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit0_c11 = ((0xffffffU 
                                             & (vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0 
                                                * vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0)) 
                                            <= vlSelf->__PVT__u_sqrt__DOT__data_c10);
    vlSelf->__PVT__u_sqrt__DOT__bit1_c11 = vlSelf->__PVT__u_sqrt__DOT__bit1_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit2_c11 = vlSelf->__PVT__u_sqrt__DOT__bit2_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit3_c11 = vlSelf->__PVT__u_sqrt__DOT__bit3_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c11 = vlSelf->__PVT__u_sqrt__DOT__bit4_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c11 = vlSelf->__PVT__u_sqrt__DOT__bit5_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c11 = vlSelf->__PVT__u_sqrt__DOT__bit6_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c11 = vlSelf->__PVT__u_sqrt__DOT__bit7_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c11 = vlSelf->__PVT__u_sqrt__DOT__bit8_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c11 = vlSelf->__PVT__u_sqrt__DOT__bit10_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit9_c11 = vlSelf->__PVT__u_sqrt__DOT__bit9_c10;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c8 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c7));
    vlSelf->__PVT__u_sqrt__DOT__data_c10 = vlSelf->__PVT__u_sqrt__DOT__data_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit1_c10 = ((0xffffffU 
                                             & (vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0 
                                                * vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0)) 
                                            <= vlSelf->__PVT__u_sqrt__DOT__data_c9);
    vlSelf->__PVT__u_sqrt__DOT__bit2_c10 = vlSelf->__PVT__u_sqrt__DOT__bit2_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit3_c10 = vlSelf->__PVT__u_sqrt__DOT__bit3_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c10 = vlSelf->__PVT__u_sqrt__DOT__bit4_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c10 = vlSelf->__PVT__u_sqrt__DOT__bit5_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c10 = vlSelf->__PVT__u_sqrt__DOT__bit6_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c10 = vlSelf->__PVT__u_sqrt__DOT__bit7_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c10 = vlSelf->__PVT__u_sqrt__DOT__bit8_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c10 = vlSelf->__PVT__u_sqrt__DOT__bit10_c9;
    vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0 = (1U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11) 
                                                                                << 1U))))))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c10 = vlSelf->__PVT__u_sqrt__DOT__bit9_c9;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c7 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c6));
    vlSelf->__PVT__u_sqrt__DOT__data_c9 = vlSelf->__PVT__u_sqrt__DOT__data_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit2_c9 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c8);
    vlSelf->__PVT__u_sqrt__DOT__bit3_c9 = vlSelf->__PVT__u_sqrt__DOT__bit3_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c9 = vlSelf->__PVT__u_sqrt__DOT__bit4_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c9 = vlSelf->__PVT__u_sqrt__DOT__bit5_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c9 = vlSelf->__PVT__u_sqrt__DOT__bit6_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c9 = vlSelf->__PVT__u_sqrt__DOT__bit7_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c9 = vlSelf->__PVT__u_sqrt__DOT__bit8_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c9 = vlSelf->__PVT__u_sqrt__DOT__bit10_c8;
    vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0 = (2U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c10) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c10) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c10) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c10) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c10) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c10) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c10) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c10) 
                                                                               << 3U) 
                                                                              | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c10) 
                                                                                << 2U)))))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c9 = vlSelf->__PVT__u_sqrt__DOT__bit9_c8;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c6 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c5));
    vlSelf->__PVT__u_sqrt__DOT__data_c8 = vlSelf->__PVT__u_sqrt__DOT__data_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit3_c8 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c7);
    vlSelf->__PVT__u_sqrt__DOT__bit4_c8 = vlSelf->__PVT__u_sqrt__DOT__bit4_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c8 = vlSelf->__PVT__u_sqrt__DOT__bit5_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c8 = vlSelf->__PVT__u_sqrt__DOT__bit6_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c8 = vlSelf->__PVT__u_sqrt__DOT__bit7_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c8 = vlSelf->__PVT__u_sqrt__DOT__bit8_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c8 = vlSelf->__PVT__u_sqrt__DOT__bit10_c7;
    vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0 = (4U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c9) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c9) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c9) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c9) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c9) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c9) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c9) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c9) 
                                                                            << 4U) 
                                                                           | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c9) 
                                                                              << 3U))))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c8 = vlSelf->__PVT__u_sqrt__DOT__bit9_c7;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c5 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c4));
    vlSelf->__PVT__u_sqrt__DOT__data_c7 = vlSelf->__PVT__u_sqrt__DOT__data_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c7 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c6);
    vlSelf->__PVT__u_sqrt__DOT__bit5_c7 = vlSelf->__PVT__u_sqrt__DOT__bit5_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c7 = vlSelf->__PVT__u_sqrt__DOT__bit6_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c7 = vlSelf->__PVT__u_sqrt__DOT__bit7_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c7 = vlSelf->__PVT__u_sqrt__DOT__bit8_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c7 = vlSelf->__PVT__u_sqrt__DOT__bit10_c6;
    vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0 = (8U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c8) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c8) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c8) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c8) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c8) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c8) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c8) 
                                                                         << 5U) 
                                                                        | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c8) 
                                                                           << 4U)))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c7 = vlSelf->__PVT__u_sqrt__DOT__bit9_c6;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c4 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c3));
    vlSelf->__PVT__u_sqrt__DOT__data_c6 = vlSelf->__PVT__u_sqrt__DOT__data_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c6 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c5);
    vlSelf->__PVT__u_sqrt__DOT__bit6_c6 = vlSelf->__PVT__u_sqrt__DOT__bit6_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c6 = vlSelf->__PVT__u_sqrt__DOT__bit7_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c6 = vlSelf->__PVT__u_sqrt__DOT__bit8_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c6 = vlSelf->__PVT__u_sqrt__DOT__bit10_c5;
    vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0 = (0x10U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c7) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c7) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c7) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c7) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c7) 
                                                                      << 6U) 
                                                                     | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c7) 
                                                                        << 5U))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c6 = vlSelf->__PVT__u_sqrt__DOT__bit9_c5;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c3 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c2));
    vlSelf->__PVT__u_sqrt__DOT__data_c5 = vlSelf->__PVT__u_sqrt__DOT__data_c4;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c5 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c4);
    vlSelf->__PVT__u_sqrt__DOT__bit7_c5 = vlSelf->__PVT__u_sqrt__DOT__bit7_c4;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c5 = vlSelf->__PVT__u_sqrt__DOT__bit8_c4;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c5 = vlSelf->__PVT__u_sqrt__DOT__bit10_c4;
    vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0 = (0x20U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c6) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c6) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c6) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c6) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c6) 
                                                                   << 7U) 
                                                                  | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c6) 
                                                                     << 6U)))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c5 = vlSelf->__PVT__u_sqrt__DOT__bit9_c4;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c2 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c1));
    vlSelf->__PVT__u_sqrt__DOT__data_c4 = vlSelf->__PVT__u_sqrt__DOT__data_c3;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c4 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c3);
    vlSelf->__PVT__u_sqrt__DOT__bit8_c4 = vlSelf->__PVT__u_sqrt__DOT__bit8_c3;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c4 = vlSelf->__PVT__u_sqrt__DOT__bit10_c3;
    vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0 = (0x40U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c5) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c5) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c5) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c5) 
                                                                << 8U) 
                                                               | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c5) 
                                                                  << 7U))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c4 = vlSelf->__PVT__u_sqrt__DOT__bit9_c3;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c1 = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn;
    vlSelf->__PVT__u_sqrt__DOT__data_c3 = vlSelf->__PVT__u_sqrt__DOT__data_c2;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c3 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c2);
    vlSelf->__PVT__u_sqrt__DOT__bit10_c3 = vlSelf->__PVT__u_sqrt__DOT__bit10_c2;
    vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0 = (0x80U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c4) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c4) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c4) 
                                                             << 9U) 
                                                            | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c4) 
                                                               << 8U)))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c3 = vlSelf->__PVT__u_sqrt__DOT__bit9_c2;
    vlSelf->__PVT__u_sqrt__DOT__data_c2 = vlSelf->__PVT__u_sqrt__DOT__data_c1;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c2 = vlSelf->__PVT__u_sqrt__DOT__bit10_c1;
    vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0 = (0x100U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c3) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c3) 
                                                          << 0xaU) 
                                                         | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c3) 
                                                            << 9U))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c2 = ((0xffffffU 
                                            & ((0x400U 
                                                | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c1) 
                                                   << 0xbU)) 
                                               * (0x400U 
                                                  | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c1) 
                                                     << 0xbU)))) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c1);
    vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0 = (0x200U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c2) 
                                                       << 0xbU) 
                                                      | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c2) 
                                                         << 0xaU)));
    vlSelf->__PVT__u_sqrt__DOT__bit10_c1 = (0x400000U 
                                            <= (vlSelf->__PVT__G_square_data 
                                                << 2U));
    vlSelf->__PVT__u_sqrt__DOT__data_c1 = (vlSelf->__PVT__G_square_data 
                                           << 2U);
    vlSelf->__PVT__G_square_data = (0x1ffffU & (vlSelf->__PVT__Gx_square_data 
                                                + vlSelf->__PVT__Gy_square_data));
    vlSelf->__PVT__Gx_square_data = (0x3ffffU & VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gx_data))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gx_data)))));
    vlSelf->__PVT__Gy_square_data = (0x3ffffU & VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gy_data))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gy_data)))));
    vlSelf->__PVT__Gx_data = (0x1ffU & ((IData)(vlSelf->__PVT__matrix_p23) 
                                        - (IData)(vlSelf->__PVT__matrix_p32)));
    vlSelf->__PVT__Gy_data = (0x1ffU & ((IData)(vlSelf->__PVT__matrix_p22) 
                                        - (IData)(vlSelf->__PVT__matrix_p33)));
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__1(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__1\n"); );
    // Init
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag = 0;
    // Body
    vlSelf->__Vdly__matrix_img_de_r2 = vlSelf->__PVT__matrix_img_de_r2;
    vlSelf->__Vdly__matrix_img_href_r2 = vlSelf->__PVT__matrix_img_href_r2;
    vlSelf->__Vdly__matrix_img_vsync_r2 = vlSelf->__PVT__matrix_img_vsync_r2;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__Vdly__matrix_img_de_r2 = ((2U & ((IData)(vlSelf->__PVT__matrix_img_de_r2) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->__PVT__matrix_img_de_r1) 
                                                >> 0xbU)));
        vlSelf->__Vdly__matrix_img_href_r2 = ((2U & 
                                               ((IData)(vlSelf->__PVT__matrix_img_href_r2) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->__PVT__matrix_img_href_r1) 
                                                    >> 0xbU)));
        vlSelf->__Vdly__matrix_img_vsync_r2 = ((2U 
                                                & ((IData)(vlSelf->__PVT__matrix_img_vsync_r2) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__matrix_img_vsync_r1) 
                                                     >> 0xbU)));
        vlSelf->__PVT__matrix_img_de_r1 = ((0xffeU 
                                            & ((IData)(vlSelf->__PVT__matrix_img_de_r1) 
                                               << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                               >> 1U)));
        vlSelf->__PVT__matrix_img_href_r1 = ((0xffeU 
                                              & ((IData)(vlSelf->__PVT__matrix_img_href_r1) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                                   >> 1U)));
        vlSelf->__PVT__matrix_img_vsync_r1 = ((0xffeU 
                                               & ((IData)(vlSelf->__PVT__matrix_img_vsync_r1) 
                                                  << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                                    >> 1U)));
        vlSelf->__PVT__matrix_edge_flag_r1 = ((0xffeU 
                                               & ((IData)(vlSelf->__PVT__matrix_edge_flag_r1) 
                                                  << 1U)) 
                                              | (1U 
                                                 & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                                     | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag)) 
                                                    >> 1U)));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag 
            = ((2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                      << 1U)) | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag 
            = ((2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                      << 1U)) | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                                 & (1U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de)) 
               | (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                   & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                  | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href)) 
               | (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                   & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                  | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag)) 
               | ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                    & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                   & (0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt))) 
                  | (0xbU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag)) 
               | ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                    & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                   & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt))) 
                  | (0x78aU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt 
            = ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                 & (0x437U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt)))
                ? 1U : (((0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)) 
                         & (0x78aU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)))
                         ? (0x7ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)))
                         : 0U));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync)) 
               | (1U & ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                          & (1U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                         & (0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt))) 
                        | ((~ ((0xaU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)) 
                               & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly))) 
                           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync)))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                        << 1U)));
        if (vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) {
            vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt)));
        } else if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)))) {
            vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt = 0U;
        }
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt 
            = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_vsync)
                ? (0x7ffU & (((~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                              & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))
                              : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)))
                : 0U);
        if (vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb) {
            vlSelf->__PVT__matrix_p21 = vlSelf->__PVT__matrix_p22;
            vlSelf->__PVT__matrix_p11 = vlSelf->__PVT__matrix_p12;
            vlSelf->__PVT__matrix_p31 = vlSelf->__PVT__matrix_p32;
            vlSelf->__PVT__matrix_p22 = vlSelf->__PVT__matrix_p23;
            vlSelf->__PVT__matrix_p12 = vlSelf->__PVT__matrix_p13;
            vlSelf->__PVT__matrix_p32 = vlSelf->__PVT__matrix_p33;
            vlSelf->__PVT__matrix_p23 = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata;
            vlSelf->__PVT__matrix_p13 = ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                          ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                         [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                          : 0U);
            vlSelf->__PVT__matrix_p33 = (0xffU & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data 
                                                  >> 0x10U));
        }
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly 
            = (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly 
            = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href;
    } else {
        vlSelf->__Vdly__matrix_img_de_r2 = 0U;
        vlSelf->__Vdly__matrix_img_href_r2 = 0U;
        vlSelf->__Vdly__matrix_img_vsync_r2 = 0U;
        vlSelf->__PVT__matrix_img_de_r1 = 0U;
        vlSelf->__PVT__matrix_img_href_r1 = 0U;
        vlSelf->__PVT__matrix_img_vsync_r1 = 0U;
        vlSelf->__PVT__matrix_edge_flag_r1 = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt = 0U;
        vlSelf->__PVT__matrix_p21 = 0U;
        vlSelf->__PVT__matrix_p11 = 0U;
        vlSelf->__PVT__matrix_p31 = 0U;
        vlSelf->__PVT__matrix_p22 = 0U;
        vlSelf->__PVT__matrix_p12 = 0U;
        vlSelf->__PVT__matrix_p32 = 0U;
        vlSelf->__PVT__matrix_p23 = 0U;
        vlSelf->__PVT__matrix_p13 = 0U;
        vlSelf->__PVT__matrix_p33 = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly = 0U;
    }
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__3(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_R__3\n"); );
    // Body
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_de) 
           & (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href));
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G__0(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G__0\n"); );
    // Init
    CData/*7:0*/ u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
    u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 = 0;
    CData/*7:0*/ u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
    u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v0;
    __Vdlyvval__matrix_p22_r1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v1;
    __Vdlyvval__matrix_p22_r1__v1 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v2;
    __Vdlyvval__matrix_p22_r1__v2 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v3;
    __Vdlyvval__matrix_p22_r1__v3 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v4;
    __Vdlyvval__matrix_p22_r1__v4 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v5;
    __Vdlyvval__matrix_p22_r1__v5 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v6;
    __Vdlyvval__matrix_p22_r1__v6 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v7;
    __Vdlyvval__matrix_p22_r1__v7 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v8;
    __Vdlyvval__matrix_p22_r1__v8 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v9;
    __Vdlyvval__matrix_p22_r1__v9 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v10;
    __Vdlyvval__matrix_p22_r1__v10 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v11;
    __Vdlyvval__matrix_p22_r1__v11 = 0;
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer = 0;
    SData/*10:0*/ __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full = 0;
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer = 0;
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer = 0;
    // Body
    vlSelf->__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 = 0U;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
    __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0U;
    u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 
        = (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
            & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)))
            ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata)
            : ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))
                ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
               [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer]
                : 0U));
    if ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))) {
        vlSelf->__Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 
            = u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
        vlSelf->__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 
            = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    }
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count 
            = (0xfffU & ((2U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid)))
                          ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)
                              ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count)
                              : ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count)))
                          : ((1U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid) 
                                      << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid)))
                              ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)
                                  ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count)
                                  : ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count) 
                                     - (IData)(1U)))
                              : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count))));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count 
            = (0xfffU & ((2U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid)))
                          ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)
                              ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count)
                              : ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count)))
                          : ((1U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid) 
                                      << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid)))
                              ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)
                                  ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count)
                                  : ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count) 
                                     - (IData)(1U)))
                              : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer)));
        vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer)));
    } else {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer = 0U;
        vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer = 0U;
    }
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty 
        = (1U & ((~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn)) 
                 | ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer)) 
                        & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))) 
                       | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer) 
                          == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer) 
                                        - (IData)(1U))))) 
                      & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb)) 
                     & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb))) 
                    | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty) 
                           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb))) 
                       & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)))));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
           & ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer)) 
                  & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))) 
                 | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer) 
                    == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer) 
                                  - (IData)(1U))))) 
                & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb)) 
               & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb))) 
              | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full) 
                     & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb))) 
                 & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full))));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty 
        = (1U & ((~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn)) 
                 | ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer)) 
                        & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))) 
                       | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer) 
                          == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer) 
                                        - (IData)(1U))))) 
                      & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb)) 
                     & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid))) 
                    | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty) 
                           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid))) 
                       & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)))));
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
           & ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer)) 
                  & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))) 
                 | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer) 
                    == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer) 
                                  - (IData)(1U))))) 
                & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid)) 
               & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb))) 
              | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full) 
                     & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb))) 
                 & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full))));
    __Vdlyvval__matrix_p22_r1__v0 = vlSelf->__PVT__matrix_p22;
    __Vdlyvval__matrix_p22_r1__v1 = vlSelf->__PVT__matrix_p22_r1
        [0U];
    __Vdlyvval__matrix_p22_r1__v2 = vlSelf->__PVT__matrix_p22_r1
        [1U];
    __Vdlyvval__matrix_p22_r1__v3 = vlSelf->__PVT__matrix_p22_r1
        [2U];
    __Vdlyvval__matrix_p22_r1__v4 = vlSelf->__PVT__matrix_p22_r1
        [3U];
    __Vdlyvval__matrix_p22_r1__v5 = vlSelf->__PVT__matrix_p22_r1
        [4U];
    __Vdlyvval__matrix_p22_r1__v6 = vlSelf->__PVT__matrix_p22_r1
        [5U];
    __Vdlyvval__matrix_p22_r1__v7 = vlSelf->__PVT__matrix_p22_r1
        [6U];
    __Vdlyvval__matrix_p22_r1__v8 = vlSelf->__PVT__matrix_p22_r1
        [7U];
    __Vdlyvval__matrix_p22_r1__v9 = vlSelf->__PVT__matrix_p22_r1
        [8U];
    __Vdlyvval__matrix_p22_r1__v10 = vlSelf->__PVT__matrix_p22_r1
        [9U];
    __Vdlyvval__matrix_p22_r1__v11 = vlSelf->__PVT__matrix_p22_r1
        [0xaU];
    u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 
        = (0xffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                     & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)))
                     ? (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data 
                        >> 8U) : ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))
                                   ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
                                  [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer]
                                   : 0U)));
    if ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))) {
        __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 
            = u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
        __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 
            = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    }
    vlSelf->__PVT__u_sqrt__DOT__result_valid_c12 = 
        ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
         & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c11));
    vlSelf->__PVT__pixel_data2 = ((0xffU < (IData)(vlSelf->__PVT__pixel_data1))
                                   ? 0xffU : (0xffU 
                                              & (IData)(vlSelf->__PVT__pixel_data1)));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
    if (__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0) {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem[__Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0] 
            = __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    }
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c11 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                  & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c10));
    vlSelf->__PVT__pixel_data1 = (0x7ffU & ((0x800U 
                                             & (IData)(vlSelf->__PVT__matrix_edge_flag_r1))
                                             ? vlSelf->__PVT__matrix_p22_r1
                                            [0xbU] : 
                                            (vlSelf->__PVT__matrix_p22_r1
                                             [0xbU] 
                                             + (IData)(vlSelf->__PVT__u_sqrt__DOT__result_c12))));
    vlSelf->__PVT__matrix_p22_r1[0U] = __Vdlyvval__matrix_p22_r1__v0;
    vlSelf->__PVT__matrix_p22_r1[1U] = __Vdlyvval__matrix_p22_r1__v1;
    vlSelf->__PVT__matrix_p22_r1[2U] = __Vdlyvval__matrix_p22_r1__v2;
    vlSelf->__PVT__matrix_p22_r1[3U] = __Vdlyvval__matrix_p22_r1__v3;
    vlSelf->__PVT__matrix_p22_r1[4U] = __Vdlyvval__matrix_p22_r1__v4;
    vlSelf->__PVT__matrix_p22_r1[5U] = __Vdlyvval__matrix_p22_r1__v5;
    vlSelf->__PVT__matrix_p22_r1[6U] = __Vdlyvval__matrix_p22_r1__v6;
    vlSelf->__PVT__matrix_p22_r1[7U] = __Vdlyvval__matrix_p22_r1__v7;
    vlSelf->__PVT__matrix_p22_r1[8U] = __Vdlyvval__matrix_p22_r1__v8;
    vlSelf->__PVT__matrix_p22_r1[9U] = __Vdlyvval__matrix_p22_r1__v9;
    vlSelf->__PVT__matrix_p22_r1[0xaU] = __Vdlyvval__matrix_p22_r1__v10;
    vlSelf->__PVT__matrix_p22_r1[0xbU] = __Vdlyvval__matrix_p22_r1__v11;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c10 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                  & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c9));
    vlSelf->__PVT__u_sqrt__DOT__result_c12 = (0x7ffU 
                                              & (((0xffffffU 
                                                   & (vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0 
                                                      * vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0)) 
                                                  <= vlSelf->__PVT__u_sqrt__DOT__data_c11)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                       << 9U) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                          << 8U) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                             << 7U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11))))))))))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11)))))))))))));
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c9 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c8));
    vlSelf->__PVT__u_sqrt__DOT__data_c11 = vlSelf->__PVT__u_sqrt__DOT__data_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit0_c11 = ((0xffffffU 
                                             & (vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0 
                                                * vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0)) 
                                            <= vlSelf->__PVT__u_sqrt__DOT__data_c10);
    vlSelf->__PVT__u_sqrt__DOT__bit1_c11 = vlSelf->__PVT__u_sqrt__DOT__bit1_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit2_c11 = vlSelf->__PVT__u_sqrt__DOT__bit2_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit3_c11 = vlSelf->__PVT__u_sqrt__DOT__bit3_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c11 = vlSelf->__PVT__u_sqrt__DOT__bit4_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c11 = vlSelf->__PVT__u_sqrt__DOT__bit5_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c11 = vlSelf->__PVT__u_sqrt__DOT__bit6_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c11 = vlSelf->__PVT__u_sqrt__DOT__bit7_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c11 = vlSelf->__PVT__u_sqrt__DOT__bit8_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c11 = vlSelf->__PVT__u_sqrt__DOT__bit10_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit9_c11 = vlSelf->__PVT__u_sqrt__DOT__bit9_c10;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c8 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c7));
    vlSelf->__PVT__u_sqrt__DOT__data_c10 = vlSelf->__PVT__u_sqrt__DOT__data_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit1_c10 = ((0xffffffU 
                                             & (vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0 
                                                * vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0)) 
                                            <= vlSelf->__PVT__u_sqrt__DOT__data_c9);
    vlSelf->__PVT__u_sqrt__DOT__bit2_c10 = vlSelf->__PVT__u_sqrt__DOT__bit2_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit3_c10 = vlSelf->__PVT__u_sqrt__DOT__bit3_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c10 = vlSelf->__PVT__u_sqrt__DOT__bit4_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c10 = vlSelf->__PVT__u_sqrt__DOT__bit5_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c10 = vlSelf->__PVT__u_sqrt__DOT__bit6_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c10 = vlSelf->__PVT__u_sqrt__DOT__bit7_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c10 = vlSelf->__PVT__u_sqrt__DOT__bit8_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c10 = vlSelf->__PVT__u_sqrt__DOT__bit10_c9;
    vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0 = (1U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11) 
                                                                                << 1U))))))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c10 = vlSelf->__PVT__u_sqrt__DOT__bit9_c9;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c7 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c6));
    vlSelf->__PVT__u_sqrt__DOT__data_c9 = vlSelf->__PVT__u_sqrt__DOT__data_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit2_c9 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c8);
    vlSelf->__PVT__u_sqrt__DOT__bit3_c9 = vlSelf->__PVT__u_sqrt__DOT__bit3_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c9 = vlSelf->__PVT__u_sqrt__DOT__bit4_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c9 = vlSelf->__PVT__u_sqrt__DOT__bit5_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c9 = vlSelf->__PVT__u_sqrt__DOT__bit6_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c9 = vlSelf->__PVT__u_sqrt__DOT__bit7_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c9 = vlSelf->__PVT__u_sqrt__DOT__bit8_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c9 = vlSelf->__PVT__u_sqrt__DOT__bit10_c8;
    vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0 = (2U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c10) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c10) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c10) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c10) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c10) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c10) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c10) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c10) 
                                                                               << 3U) 
                                                                              | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c10) 
                                                                                << 2U)))))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c9 = vlSelf->__PVT__u_sqrt__DOT__bit9_c8;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c6 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c5));
    vlSelf->__PVT__u_sqrt__DOT__data_c8 = vlSelf->__PVT__u_sqrt__DOT__data_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit3_c8 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c7);
    vlSelf->__PVT__u_sqrt__DOT__bit4_c8 = vlSelf->__PVT__u_sqrt__DOT__bit4_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c8 = vlSelf->__PVT__u_sqrt__DOT__bit5_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c8 = vlSelf->__PVT__u_sqrt__DOT__bit6_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c8 = vlSelf->__PVT__u_sqrt__DOT__bit7_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c8 = vlSelf->__PVT__u_sqrt__DOT__bit8_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c8 = vlSelf->__PVT__u_sqrt__DOT__bit10_c7;
    vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0 = (4U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c9) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c9) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c9) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c9) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c9) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c9) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c9) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c9) 
                                                                            << 4U) 
                                                                           | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c9) 
                                                                              << 3U))))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c8 = vlSelf->__PVT__u_sqrt__DOT__bit9_c7;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c5 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c4));
    vlSelf->__PVT__u_sqrt__DOT__data_c7 = vlSelf->__PVT__u_sqrt__DOT__data_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c7 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c6);
    vlSelf->__PVT__u_sqrt__DOT__bit5_c7 = vlSelf->__PVT__u_sqrt__DOT__bit5_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c7 = vlSelf->__PVT__u_sqrt__DOT__bit6_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c7 = vlSelf->__PVT__u_sqrt__DOT__bit7_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c7 = vlSelf->__PVT__u_sqrt__DOT__bit8_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c7 = vlSelf->__PVT__u_sqrt__DOT__bit10_c6;
    vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0 = (8U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c8) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c8) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c8) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c8) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c8) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c8) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c8) 
                                                                         << 5U) 
                                                                        | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c8) 
                                                                           << 4U)))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c7 = vlSelf->__PVT__u_sqrt__DOT__bit9_c6;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c4 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c3));
    vlSelf->__PVT__u_sqrt__DOT__data_c6 = vlSelf->__PVT__u_sqrt__DOT__data_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c6 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c5);
    vlSelf->__PVT__u_sqrt__DOT__bit6_c6 = vlSelf->__PVT__u_sqrt__DOT__bit6_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c6 = vlSelf->__PVT__u_sqrt__DOT__bit7_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c6 = vlSelf->__PVT__u_sqrt__DOT__bit8_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c6 = vlSelf->__PVT__u_sqrt__DOT__bit10_c5;
    vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0 = (0x10U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c7) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c7) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c7) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c7) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c7) 
                                                                      << 6U) 
                                                                     | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c7) 
                                                                        << 5U))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c6 = vlSelf->__PVT__u_sqrt__DOT__bit9_c5;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c3 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c2));
    vlSelf->__PVT__u_sqrt__DOT__data_c5 = vlSelf->__PVT__u_sqrt__DOT__data_c4;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c5 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c4);
    vlSelf->__PVT__u_sqrt__DOT__bit7_c5 = vlSelf->__PVT__u_sqrt__DOT__bit7_c4;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c5 = vlSelf->__PVT__u_sqrt__DOT__bit8_c4;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c5 = vlSelf->__PVT__u_sqrt__DOT__bit10_c4;
    vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0 = (0x20U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c6) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c6) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c6) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c6) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c6) 
                                                                   << 7U) 
                                                                  | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c6) 
                                                                     << 6U)))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c5 = vlSelf->__PVT__u_sqrt__DOT__bit9_c4;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c2 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c1));
    vlSelf->__PVT__u_sqrt__DOT__data_c4 = vlSelf->__PVT__u_sqrt__DOT__data_c3;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c4 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c3);
    vlSelf->__PVT__u_sqrt__DOT__bit8_c4 = vlSelf->__PVT__u_sqrt__DOT__bit8_c3;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c4 = vlSelf->__PVT__u_sqrt__DOT__bit10_c3;
    vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0 = (0x40U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c5) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c5) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c5) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c5) 
                                                                << 8U) 
                                                               | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c5) 
                                                                  << 7U))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c4 = vlSelf->__PVT__u_sqrt__DOT__bit9_c3;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c1 = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn;
    vlSelf->__PVT__u_sqrt__DOT__data_c3 = vlSelf->__PVT__u_sqrt__DOT__data_c2;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c3 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c2);
    vlSelf->__PVT__u_sqrt__DOT__bit10_c3 = vlSelf->__PVT__u_sqrt__DOT__bit10_c2;
    vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0 = (0x80U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c4) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c4) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c4) 
                                                             << 9U) 
                                                            | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c4) 
                                                               << 8U)))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c3 = vlSelf->__PVT__u_sqrt__DOT__bit9_c2;
    vlSelf->__PVT__u_sqrt__DOT__data_c2 = vlSelf->__PVT__u_sqrt__DOT__data_c1;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c2 = vlSelf->__PVT__u_sqrt__DOT__bit10_c1;
    vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0 = (0x100U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c3) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c3) 
                                                          << 0xaU) 
                                                         | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c3) 
                                                            << 9U))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c2 = ((0xffffffU 
                                            & ((0x400U 
                                                | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c1) 
                                                   << 0xbU)) 
                                               * (0x400U 
                                                  | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c1) 
                                                     << 0xbU)))) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c1);
    vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0 = (0x200U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c2) 
                                                       << 0xbU) 
                                                      | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c2) 
                                                         << 0xaU)));
    vlSelf->__PVT__u_sqrt__DOT__bit10_c1 = (0x400000U 
                                            <= (vlSelf->__PVT__G_square_data 
                                                << 2U));
    vlSelf->__PVT__u_sqrt__DOT__data_c1 = (vlSelf->__PVT__G_square_data 
                                           << 2U);
    vlSelf->__PVT__G_square_data = (0x1ffffU & (vlSelf->__PVT__Gx_square_data 
                                                + vlSelf->__PVT__Gy_square_data));
    vlSelf->__PVT__Gx_square_data = (0x3ffffU & VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gx_data))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gx_data)))));
    vlSelf->__PVT__Gy_square_data = (0x3ffffU & VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gy_data))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gy_data)))));
    vlSelf->__PVT__Gx_data = (0x1ffU & ((IData)(vlSelf->__PVT__matrix_p23) 
                                        - (IData)(vlSelf->__PVT__matrix_p32)));
    vlSelf->__PVT__Gy_data = (0x1ffU & ((IData)(vlSelf->__PVT__matrix_p22) 
                                        - (IData)(vlSelf->__PVT__matrix_p33)));
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G__1(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_G__1\n"); );
    // Init
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag = 0;
    // Body
    vlSelf->__Vdly__matrix_img_de_r2 = vlSelf->__PVT__matrix_img_de_r2;
    vlSelf->__Vdly__matrix_img_href_r2 = vlSelf->__PVT__matrix_img_href_r2;
    vlSelf->__Vdly__matrix_img_vsync_r2 = vlSelf->__PVT__matrix_img_vsync_r2;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__Vdly__matrix_img_de_r2 = ((2U & ((IData)(vlSelf->__PVT__matrix_img_de_r2) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->__PVT__matrix_img_de_r1) 
                                                >> 0xbU)));
        vlSelf->__Vdly__matrix_img_href_r2 = ((2U & 
                                               ((IData)(vlSelf->__PVT__matrix_img_href_r2) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->__PVT__matrix_img_href_r1) 
                                                    >> 0xbU)));
        vlSelf->__Vdly__matrix_img_vsync_r2 = ((2U 
                                                & ((IData)(vlSelf->__PVT__matrix_img_vsync_r2) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__matrix_img_vsync_r1) 
                                                     >> 0xbU)));
        vlSelf->__PVT__matrix_img_de_r1 = ((0xffeU 
                                            & ((IData)(vlSelf->__PVT__matrix_img_de_r1) 
                                               << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                               >> 1U)));
        vlSelf->__PVT__matrix_img_href_r1 = ((0xffeU 
                                              & ((IData)(vlSelf->__PVT__matrix_img_href_r1) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                                   >> 1U)));
        vlSelf->__PVT__matrix_img_vsync_r1 = ((0xffeU 
                                               & ((IData)(vlSelf->__PVT__matrix_img_vsync_r1) 
                                                  << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                                    >> 1U)));
        vlSelf->__PVT__matrix_edge_flag_r1 = ((0xffeU 
                                               & ((IData)(vlSelf->__PVT__matrix_edge_flag_r1) 
                                                  << 1U)) 
                                              | (1U 
                                                 & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                                     | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag)) 
                                                    >> 1U)));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag 
            = ((2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                      << 1U)) | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag 
            = ((2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                      << 1U)) | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                                 & (1U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de)) 
               | (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                   & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                  | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href)) 
               | (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                   & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                  | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag)) 
               | ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                    & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                   & (0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt))) 
                  | (0xbU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag)) 
               | ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                    & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                   & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt))) 
                  | (0x78aU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt 
            = ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                 & (0x437U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt)))
                ? 1U : (((0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)) 
                         & (0x78aU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)))
                         ? (0x7ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)))
                         : 0U));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync)) 
               | (1U & ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                          & (1U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                         & (0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt))) 
                        | ((~ ((0xaU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)) 
                               & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly))) 
                           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync)))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                        << 1U)));
        if (vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) {
            vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt)));
        } else if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)))) {
            vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt = 0U;
        }
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt 
            = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_vsync)
                ? (0x7ffU & (((~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                              & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))
                              : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)))
                : 0U);
        if (vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb) {
            vlSelf->__PVT__matrix_p21 = vlSelf->__PVT__matrix_p22;
            vlSelf->__PVT__matrix_p11 = vlSelf->__PVT__matrix_p12;
            vlSelf->__PVT__matrix_p31 = vlSelf->__PVT__matrix_p32;
            vlSelf->__PVT__matrix_p22 = vlSelf->__PVT__matrix_p23;
            vlSelf->__PVT__matrix_p12 = vlSelf->__PVT__matrix_p13;
            vlSelf->__PVT__matrix_p32 = vlSelf->__PVT__matrix_p33;
            vlSelf->__PVT__matrix_p23 = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata;
            vlSelf->__PVT__matrix_p13 = ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                          ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                         [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                          : 0U);
            vlSelf->__PVT__matrix_p33 = (0xffU & (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data 
                                                  >> 8U));
        }
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly 
            = (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly 
            = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href;
    } else {
        vlSelf->__Vdly__matrix_img_de_r2 = 0U;
        vlSelf->__Vdly__matrix_img_href_r2 = 0U;
        vlSelf->__Vdly__matrix_img_vsync_r2 = 0U;
        vlSelf->__PVT__matrix_img_de_r1 = 0U;
        vlSelf->__PVT__matrix_img_href_r1 = 0U;
        vlSelf->__PVT__matrix_img_vsync_r1 = 0U;
        vlSelf->__PVT__matrix_edge_flag_r1 = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt = 0U;
        vlSelf->__PVT__matrix_p21 = 0U;
        vlSelf->__PVT__matrix_p11 = 0U;
        vlSelf->__PVT__matrix_p31 = 0U;
        vlSelf->__PVT__matrix_p22 = 0U;
        vlSelf->__PVT__matrix_p12 = 0U;
        vlSelf->__PVT__matrix_p32 = 0U;
        vlSelf->__PVT__matrix_p23 = 0U;
        vlSelf->__PVT__matrix_p13 = 0U;
        vlSelf->__PVT__matrix_p33 = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly = 0U;
    }
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B__0(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B__0\n"); );
    // Init
    CData/*7:0*/ u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
    u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 = 0;
    CData/*7:0*/ u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
    u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v0;
    __Vdlyvval__matrix_p22_r1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v1;
    __Vdlyvval__matrix_p22_r1__v1 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v2;
    __Vdlyvval__matrix_p22_r1__v2 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v3;
    __Vdlyvval__matrix_p22_r1__v3 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v4;
    __Vdlyvval__matrix_p22_r1__v4 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v5;
    __Vdlyvval__matrix_p22_r1__v5 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v6;
    __Vdlyvval__matrix_p22_r1__v6 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v7;
    __Vdlyvval__matrix_p22_r1__v7 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v8;
    __Vdlyvval__matrix_p22_r1__v8 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v9;
    __Vdlyvval__matrix_p22_r1__v9 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v10;
    __Vdlyvval__matrix_p22_r1__v10 = 0;
    CData/*7:0*/ __Vdlyvval__matrix_p22_r1__v11;
    __Vdlyvval__matrix_p22_r1__v11 = 0;
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer = 0;
    SData/*10:0*/ __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full = 0;
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer = 0;
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer = 0;
    // Body
    vlSelf->__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 = 0U;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
    __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 0U;
    u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 
        = (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
            & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)))
            ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata)
            : ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))
                ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
               [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer]
                : 0U));
    if ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))) {
        vlSelf->__Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 
            = u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
        vlSelf->__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem__v0 
            = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    }
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count 
            = (0xfffU & ((2U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid)))
                          ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)
                              ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count)
                              : ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count)))
                          : ((1U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_valid) 
                                      << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_valid)))
                              ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)
                                  ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count)
                                  : ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count) 
                                     - (IData)(1U)))
                              : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count))));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count 
            = (0xfffU & ((2U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid)))
                          ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)
                              ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count)
                              : ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count)))
                          : ((1U == (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_valid) 
                                      << 1U) | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_valid)))
                              ? ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)
                                  ? (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count)
                                  : ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count) 
                                     - (IData)(1U)))
                              : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer)));
        vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer 
            = (0x7ffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                          & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)))
                          ? ((0x77fU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))
                              : 0U) : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer)));
    } else {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__data_count = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__data_count = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer = 0U;
        vlSelf->__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer = 0U;
    }
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty 
        = (1U & ((~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn)) 
                 | ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer)) 
                        & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))) 
                       | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer) 
                          == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer) 
                                        - (IData)(1U))))) 
                      & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb)) 
                     & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb))) 
                    | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty) 
                           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb))) 
                       & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__empty)))));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
           & ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer)) 
                  & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer))) 
                 | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer) 
                    == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer) 
                                  - (IData)(1U))))) 
                & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_wenb)) 
               & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb))) 
              | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full) 
                     & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb))) 
                 & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__full))));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty 
        = (1U & ((~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn)) 
                 | ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer)) 
                        & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer))) 
                       | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer) 
                          == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer) 
                                        - (IData)(1U))))) 
                      & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb)) 
                     & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid))) 
                    | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty) 
                           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid))) 
                       & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__empty)))));
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full 
        = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
           & ((((((0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer)) 
                  & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))) 
                 | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer) 
                    == (0x7ffU & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer) 
                                  - (IData)(1U))))) 
                & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid)) 
               & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb))) 
              | ((~ ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full) 
                     & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_renb))) 
                 & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full))));
    __Vdlyvval__matrix_p22_r1__v0 = vlSelf->__PVT__matrix_p22;
    __Vdlyvval__matrix_p22_r1__v1 = vlSelf->__PVT__matrix_p22_r1
        [0U];
    __Vdlyvval__matrix_p22_r1__v2 = vlSelf->__PVT__matrix_p22_r1
        [1U];
    __Vdlyvval__matrix_p22_r1__v3 = vlSelf->__PVT__matrix_p22_r1
        [2U];
    __Vdlyvval__matrix_p22_r1__v4 = vlSelf->__PVT__matrix_p22_r1
        [3U];
    __Vdlyvval__matrix_p22_r1__v5 = vlSelf->__PVT__matrix_p22_r1
        [4U];
    __Vdlyvval__matrix_p22_r1__v6 = vlSelf->__PVT__matrix_p22_r1
        [5U];
    __Vdlyvval__matrix_p22_r1__v7 = vlSelf->__PVT__matrix_p22_r1
        [6U];
    __Vdlyvval__matrix_p22_r1__v8 = vlSelf->__PVT__matrix_p22_r1
        [7U];
    __Vdlyvval__matrix_p22_r1__v9 = vlSelf->__PVT__matrix_p22_r1
        [8U];
    __Vdlyvval__matrix_p22_r1__v10 = vlSelf->__PVT__matrix_p22_r1
        [9U];
    __Vdlyvval__matrix_p22_r1__v11 = vlSelf->__PVT__matrix_p22_r1
        [0xaU];
    u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0 
        = (0xffU & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                     & (~ (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full)))
                     ? vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data
                     : ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))
                         ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem
                        [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer]
                         : 0U)));
    if ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer))) {
        __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 
            = u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT____Vlvbound_hf7bd5de5__0;
        __Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 = 1U;
        __Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0 
            = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    }
    vlSelf->__PVT__u_sqrt__DOT__result_valid_c12 = 
        ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
         & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c11));
    vlSelf->__PVT__pixel_data2 = ((0xffU < (IData)(vlSelf->__PVT__pixel_data1))
                                   ? 0xffU : (0xffU 
                                              & (IData)(vlSelf->__PVT__pixel_data1)));
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__write_pointer;
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__read_pointer;
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__write_pointer;
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__full;
    if (__Vdlyvset__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0) {
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem[__Vdlyvdim0__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0] 
            = __Vdlyvval__u_Matrix_Generate_3X3_8Bit__DOT__u1_sync_fifo__DOT__mem__v0;
    }
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c11 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                  & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c10));
    vlSelf->__PVT__pixel_data1 = (0x7ffU & ((0x800U 
                                             & (IData)(vlSelf->__PVT__matrix_edge_flag_r1))
                                             ? vlSelf->__PVT__matrix_p22_r1
                                            [0xbU] : 
                                            (vlSelf->__PVT__matrix_p22_r1
                                             [0xbU] 
                                             + (IData)(vlSelf->__PVT__u_sqrt__DOT__result_c12))));
    vlSelf->__PVT__matrix_p22_r1[0U] = __Vdlyvval__matrix_p22_r1__v0;
    vlSelf->__PVT__matrix_p22_r1[1U] = __Vdlyvval__matrix_p22_r1__v1;
    vlSelf->__PVT__matrix_p22_r1[2U] = __Vdlyvval__matrix_p22_r1__v2;
    vlSelf->__PVT__matrix_p22_r1[3U] = __Vdlyvval__matrix_p22_r1__v3;
    vlSelf->__PVT__matrix_p22_r1[4U] = __Vdlyvval__matrix_p22_r1__v4;
    vlSelf->__PVT__matrix_p22_r1[5U] = __Vdlyvval__matrix_p22_r1__v5;
    vlSelf->__PVT__matrix_p22_r1[6U] = __Vdlyvval__matrix_p22_r1__v6;
    vlSelf->__PVT__matrix_p22_r1[7U] = __Vdlyvval__matrix_p22_r1__v7;
    vlSelf->__PVT__matrix_p22_r1[8U] = __Vdlyvval__matrix_p22_r1__v8;
    vlSelf->__PVT__matrix_p22_r1[9U] = __Vdlyvval__matrix_p22_r1__v9;
    vlSelf->__PVT__matrix_p22_r1[0xaU] = __Vdlyvval__matrix_p22_r1__v10;
    vlSelf->__PVT__matrix_p22_r1[0xbU] = __Vdlyvval__matrix_p22_r1__v11;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c10 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                  & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c9));
    vlSelf->__PVT__u_sqrt__DOT__result_c12 = (0x7ffU 
                                              & (((0xffffffU 
                                                   & (vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0 
                                                      * vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0)) 
                                                  <= vlSelf->__PVT__u_sqrt__DOT__data_c11)
                                                  ? 
                                                 ((IData)(1U) 
                                                  + 
                                                  (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                       << 9U) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                          << 8U) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                             << 7U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                                << 6U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11))))))))))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11)))))))))))));
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c9 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c8));
    vlSelf->__PVT__u_sqrt__DOT__data_c11 = vlSelf->__PVT__u_sqrt__DOT__data_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit0_c11 = ((0xffffffU 
                                             & (vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0 
                                                * vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0)) 
                                            <= vlSelf->__PVT__u_sqrt__DOT__data_c10);
    vlSelf->__PVT__u_sqrt__DOT__bit1_c11 = vlSelf->__PVT__u_sqrt__DOT__bit1_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit2_c11 = vlSelf->__PVT__u_sqrt__DOT__bit2_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit3_c11 = vlSelf->__PVT__u_sqrt__DOT__bit3_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c11 = vlSelf->__PVT__u_sqrt__DOT__bit4_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c11 = vlSelf->__PVT__u_sqrt__DOT__bit5_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c11 = vlSelf->__PVT__u_sqrt__DOT__bit6_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c11 = vlSelf->__PVT__u_sqrt__DOT__bit7_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c11 = vlSelf->__PVT__u_sqrt__DOT__bit8_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c11 = vlSelf->__PVT__u_sqrt__DOT__bit10_c10;
    vlSelf->__PVT__u_sqrt__DOT__bit9_c11 = vlSelf->__PVT__u_sqrt__DOT__bit9_c10;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c8 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c7));
    vlSelf->__PVT__u_sqrt__DOT__data_c10 = vlSelf->__PVT__u_sqrt__DOT__data_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit1_c10 = ((0xffffffU 
                                             & (vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0 
                                                * vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0)) 
                                            <= vlSelf->__PVT__u_sqrt__DOT__data_c9);
    vlSelf->__PVT__u_sqrt__DOT__bit2_c10 = vlSelf->__PVT__u_sqrt__DOT__bit2_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit3_c10 = vlSelf->__PVT__u_sqrt__DOT__bit3_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c10 = vlSelf->__PVT__u_sqrt__DOT__bit4_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c10 = vlSelf->__PVT__u_sqrt__DOT__bit5_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c10 = vlSelf->__PVT__u_sqrt__DOT__bit6_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c10 = vlSelf->__PVT__u_sqrt__DOT__bit7_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c10 = vlSelf->__PVT__u_sqrt__DOT__bit8_c9;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c10 = vlSelf->__PVT__u_sqrt__DOT__bit10_c9;
    vlSelf->u_sqrt__DOT____VdfgTmp_hcb2dff5c__0 = (1U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c11) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c11) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c11) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c11) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c11) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c11) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c11) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c11) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c11) 
                                                                               << 3U) 
                                                                              | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c11) 
                                                                                << 2U) 
                                                                                | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit0_c11) 
                                                                                << 1U))))))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c10 = vlSelf->__PVT__u_sqrt__DOT__bit9_c9;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c7 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c6));
    vlSelf->__PVT__u_sqrt__DOT__data_c9 = vlSelf->__PVT__u_sqrt__DOT__data_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit2_c9 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c8);
    vlSelf->__PVT__u_sqrt__DOT__bit3_c9 = vlSelf->__PVT__u_sqrt__DOT__bit3_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c9 = vlSelf->__PVT__u_sqrt__DOT__bit4_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c9 = vlSelf->__PVT__u_sqrt__DOT__bit5_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c9 = vlSelf->__PVT__u_sqrt__DOT__bit6_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c9 = vlSelf->__PVT__u_sqrt__DOT__bit7_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c9 = vlSelf->__PVT__u_sqrt__DOT__bit8_c8;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c9 = vlSelf->__PVT__u_sqrt__DOT__bit10_c8;
    vlSelf->u_sqrt__DOT____VdfgTmp_h8b9d4bbc__0 = (2U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c10) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c10) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c10) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c10) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c10) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c10) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c10) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c10) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c10) 
                                                                               << 3U) 
                                                                              | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit1_c10) 
                                                                                << 2U)))))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c9 = vlSelf->__PVT__u_sqrt__DOT__bit9_c8;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c6 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c5));
    vlSelf->__PVT__u_sqrt__DOT__data_c8 = vlSelf->__PVT__u_sqrt__DOT__data_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit3_c8 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c7);
    vlSelf->__PVT__u_sqrt__DOT__bit4_c8 = vlSelf->__PVT__u_sqrt__DOT__bit4_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c8 = vlSelf->__PVT__u_sqrt__DOT__bit5_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c8 = vlSelf->__PVT__u_sqrt__DOT__bit6_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c8 = vlSelf->__PVT__u_sqrt__DOT__bit7_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c8 = vlSelf->__PVT__u_sqrt__DOT__bit8_c7;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c8 = vlSelf->__PVT__u_sqrt__DOT__bit10_c7;
    vlSelf->u_sqrt__DOT____VdfgTmp_h049024c3__0 = (4U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c9) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c9) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c9) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c9) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c9) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c9) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c9) 
                                                                         << 5U) 
                                                                        | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c9) 
                                                                            << 4U) 
                                                                           | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit2_c9) 
                                                                              << 3U))))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c8 = vlSelf->__PVT__u_sqrt__DOT__bit9_c7;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c5 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c4));
    vlSelf->__PVT__u_sqrt__DOT__data_c7 = vlSelf->__PVT__u_sqrt__DOT__data_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit4_c7 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c6);
    vlSelf->__PVT__u_sqrt__DOT__bit5_c7 = vlSelf->__PVT__u_sqrt__DOT__bit5_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c7 = vlSelf->__PVT__u_sqrt__DOT__bit6_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c7 = vlSelf->__PVT__u_sqrt__DOT__bit7_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c7 = vlSelf->__PVT__u_sqrt__DOT__bit8_c6;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c7 = vlSelf->__PVT__u_sqrt__DOT__bit10_c6;
    vlSelf->u_sqrt__DOT____VdfgTmp_h548b70e6__0 = (8U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c8) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c8) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c8) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c8) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c8) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c8) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c8) 
                                                                         << 5U) 
                                                                        | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit3_c8) 
                                                                           << 4U)))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c7 = vlSelf->__PVT__u_sqrt__DOT__bit9_c6;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c4 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c3));
    vlSelf->__PVT__u_sqrt__DOT__data_c6 = vlSelf->__PVT__u_sqrt__DOT__data_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit5_c6 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c5);
    vlSelf->__PVT__u_sqrt__DOT__bit6_c6 = vlSelf->__PVT__u_sqrt__DOT__bit6_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c6 = vlSelf->__PVT__u_sqrt__DOT__bit7_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c6 = vlSelf->__PVT__u_sqrt__DOT__bit8_c5;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c6 = vlSelf->__PVT__u_sqrt__DOT__bit10_c5;
    vlSelf->u_sqrt__DOT____VdfgTmp_hd7dfd128__0 = (0x10U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c7) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c7) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c7) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c7) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c7) 
                                                                   << 7U) 
                                                                  | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c7) 
                                                                      << 6U) 
                                                                     | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit4_c7) 
                                                                        << 5U))))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c6 = vlSelf->__PVT__u_sqrt__DOT__bit9_c5;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c3 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c2));
    vlSelf->__PVT__u_sqrt__DOT__data_c5 = vlSelf->__PVT__u_sqrt__DOT__data_c4;
    vlSelf->__PVT__u_sqrt__DOT__bit6_c5 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c4);
    vlSelf->__PVT__u_sqrt__DOT__bit7_c5 = vlSelf->__PVT__u_sqrt__DOT__bit7_c4;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c5 = vlSelf->__PVT__u_sqrt__DOT__bit8_c4;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c5 = vlSelf->__PVT__u_sqrt__DOT__bit10_c4;
    vlSelf->u_sqrt__DOT____VdfgTmp_h90e962dd__0 = (0x20U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c6) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c6) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c6) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c6) 
                                                                << 8U) 
                                                               | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c6) 
                                                                   << 7U) 
                                                                  | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit5_c6) 
                                                                     << 6U)))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c5 = vlSelf->__PVT__u_sqrt__DOT__bit9_c4;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c2 = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) 
                                                 & (IData)(vlSelf->__PVT__u_sqrt__DOT__data_valid_c1));
    vlSelf->__PVT__u_sqrt__DOT__data_c4 = vlSelf->__PVT__u_sqrt__DOT__data_c3;
    vlSelf->__PVT__u_sqrt__DOT__bit7_c4 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c3);
    vlSelf->__PVT__u_sqrt__DOT__bit8_c4 = vlSelf->__PVT__u_sqrt__DOT__bit8_c3;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c4 = vlSelf->__PVT__u_sqrt__DOT__bit10_c3;
    vlSelf->u_sqrt__DOT____VdfgTmp_hdb733ce7__0 = (0x40U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c5) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c5) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c5) 
                                                             << 9U) 
                                                            | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c5) 
                                                                << 8U) 
                                                               | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit6_c5) 
                                                                  << 7U))))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c4 = vlSelf->__PVT__u_sqrt__DOT__bit9_c3;
    vlSelf->__PVT__u_sqrt__DOT__data_valid_c1 = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn;
    vlSelf->__PVT__u_sqrt__DOT__data_c3 = vlSelf->__PVT__u_sqrt__DOT__data_c2;
    vlSelf->__PVT__u_sqrt__DOT__bit8_c3 = ((0xffffffU 
                                            & (vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0 
                                               * vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0)) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c2);
    vlSelf->__PVT__u_sqrt__DOT__bit10_c3 = vlSelf->__PVT__u_sqrt__DOT__bit10_c2;
    vlSelf->u_sqrt__DOT____VdfgTmp_h0b9866b6__0 = (0x80U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c4) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c4) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c4) 
                                                             << 9U) 
                                                            | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit7_c4) 
                                                               << 8U)))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c3 = vlSelf->__PVT__u_sqrt__DOT__bit9_c2;
    vlSelf->__PVT__u_sqrt__DOT__data_c2 = vlSelf->__PVT__u_sqrt__DOT__data_c1;
    vlSelf->__PVT__u_sqrt__DOT__bit10_c2 = vlSelf->__PVT__u_sqrt__DOT__bit10_c1;
    vlSelf->u_sqrt__DOT____VdfgTmp_hc08f668b__0 = (0x100U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c3) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c3) 
                                                          << 0xaU) 
                                                         | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit8_c3) 
                                                            << 9U))));
    vlSelf->__PVT__u_sqrt__DOT__bit9_c2 = ((0xffffffU 
                                            & ((0x400U 
                                                | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c1) 
                                                   << 0xbU)) 
                                               * (0x400U 
                                                  | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c1) 
                                                     << 0xbU)))) 
                                           <= vlSelf->__PVT__u_sqrt__DOT__data_c1);
    vlSelf->u_sqrt__DOT____VdfgTmp_h048c5071__0 = (0x200U 
                                                   | (((IData)(vlSelf->__PVT__u_sqrt__DOT__bit10_c2) 
                                                       << 0xbU) 
                                                      | ((IData)(vlSelf->__PVT__u_sqrt__DOT__bit9_c2) 
                                                         << 0xaU)));
    vlSelf->__PVT__u_sqrt__DOT__bit10_c1 = (0x400000U 
                                            <= (vlSelf->__PVT__G_square_data 
                                                << 2U));
    vlSelf->__PVT__u_sqrt__DOT__data_c1 = (vlSelf->__PVT__G_square_data 
                                           << 2U);
    vlSelf->__PVT__G_square_data = (0x1ffffU & (vlSelf->__PVT__Gx_square_data 
                                                + vlSelf->__PVT__Gy_square_data));
    vlSelf->__PVT__Gx_square_data = (0x3ffffU & VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gx_data))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gx_data)))));
    vlSelf->__PVT__Gy_square_data = (0x3ffffU & VL_MULS_III(18, 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gy_data))), 
                                                            (0x3ffffU 
                                                             & VL_EXTENDS_II(18,9, (IData)(vlSelf->__PVT__Gy_data)))));
    vlSelf->__PVT__Gx_data = (0x1ffU & ((IData)(vlSelf->__PVT__matrix_p23) 
                                        - (IData)(vlSelf->__PVT__matrix_p32)));
    vlSelf->__PVT__Gy_data = (0x1ffU & ((IData)(vlSelf->__PVT__matrix_p22) 
                                        - (IData)(vlSelf->__PVT__matrix_p33)));
}

VL_INLINE_OPT void Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B__1(Vsim_top_robert_sharpen_single* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_robert_sharpen_single___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__u_sharpen__DOT__u_robert_sharpen__DOT__robert_sharpen_single_B__1\n"); );
    // Init
    SData/*10:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag = 0;
    CData/*1:0*/ __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag = 0;
    // Body
    vlSelf->__Vdly__matrix_img_de_r2 = vlSelf->__PVT__matrix_img_de_r2;
    vlSelf->__Vdly__matrix_img_href_r2 = vlSelf->__PVT__matrix_img_href_r2;
    vlSelf->__Vdly__matrix_img_vsync_r2 = vlSelf->__PVT__matrix_img_vsync_r2;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
    __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
        = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
    if (vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__sys_resetn) {
        vlSelf->__Vdly__matrix_img_de_r2 = ((2U & ((IData)(vlSelf->__PVT__matrix_img_de_r2) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->__PVT__matrix_img_de_r1) 
                                                >> 0xbU)));
        vlSelf->__Vdly__matrix_img_href_r2 = ((2U & 
                                               ((IData)(vlSelf->__PVT__matrix_img_href_r2) 
                                                << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->__PVT__matrix_img_href_r1) 
                                                    >> 0xbU)));
        vlSelf->__Vdly__matrix_img_vsync_r2 = ((2U 
                                                & ((IData)(vlSelf->__PVT__matrix_img_vsync_r2) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->__PVT__matrix_img_vsync_r1) 
                                                     >> 0xbU)));
        vlSelf->__PVT__matrix_img_de_r1 = ((0xffeU 
                                            & ((IData)(vlSelf->__PVT__matrix_img_de_r1) 
                                               << 1U)) 
                                           | (1U & 
                                              ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                                               >> 1U)));
        vlSelf->__PVT__matrix_img_href_r1 = ((0xffeU 
                                              & ((IData)(vlSelf->__PVT__matrix_img_href_r1) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                                                   >> 1U)));
        vlSelf->__PVT__matrix_img_vsync_r1 = ((0xffeU 
                                               & ((IData)(vlSelf->__PVT__matrix_img_vsync_r1) 
                                                  << 1U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                                                    >> 1U)));
        vlSelf->__PVT__matrix_edge_flag_r1 = ((0xffeU 
                                               & ((IData)(vlSelf->__PVT__matrix_edge_flag_r1) 
                                                  << 1U)) 
                                              | (1U 
                                                 & (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                                                     | (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag)) 
                                                    >> 1U)));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag 
            = ((2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag) 
                      << 1U)) | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag 
            = ((2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag) 
                      << 1U)) | ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                                 & (1U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de)) 
               | (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                   & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                  | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href)) 
               | (((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                   & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                  | (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag)) 
               | ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                    & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                   & (0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt))) 
                  | (0xbU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag)) 
               | ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                    & (0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                   & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt))) 
                  | (0x78aU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag) 
                        << 1U)));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt 
            = ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                 & (0x437U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                & (0x77fU == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt)))
                ? 1U : (((0U < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)) 
                         & (0x78aU > (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)))
                         ? (0x7ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)))
                         : 0U));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = ((2U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync)) 
               | (1U & ((((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) 
                          & (1U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))) 
                         & (0U == (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt))) 
                        | ((~ ((0xaU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt)) 
                               & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly))) 
                           & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync)))));
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = ((1U & (IData)(__Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync)) 
               | (2U & ((IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync) 
                        << 1U)));
        if (vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_valid) {
            vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt)));
        } else if ((1U & (~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)))) {
            vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt = 0U;
        }
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt 
            = ((IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_vsync)
                ? (0x7ffU & (((~ (IData)(vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href)) 
                              & (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt))
                              : (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt)))
                : 0U);
        if (vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo2_renb) {
            vlSelf->__PVT__matrix_p21 = vlSelf->__PVT__matrix_p22;
            vlSelf->__PVT__matrix_p11 = vlSelf->__PVT__matrix_p12;
            vlSelf->__PVT__matrix_p31 = vlSelf->__PVT__matrix_p32;
            vlSelf->__PVT__matrix_p22 = vlSelf->__PVT__matrix_p23;
            vlSelf->__PVT__matrix_p12 = vlSelf->__PVT__matrix_p13;
            vlSelf->__PVT__matrix_p32 = vlSelf->__PVT__matrix_p33;
            vlSelf->__PVT__matrix_p23 = vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__fifo1_rdata;
            vlSelf->__PVT__matrix_p13 = ((0x77fU >= (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer))
                                          ? vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__mem
                                         [vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__u2_sync_fifo__DOT__read_pointer]
                                          : 0U);
            vlSelf->__PVT__matrix_p33 = (0xffU & vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_data);
        }
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly 
            = (0xaU < (IData)(vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt));
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly 
            = vlSymsp->TOP.sim_top__DOT__u_soc_top__DOT__u_isp_top__DOT__u_isp_core__DOT__filter_href;
    } else {
        vlSelf->__Vdly__matrix_img_de_r2 = 0U;
        vlSelf->__Vdly__matrix_img_href_r2 = 0U;
        vlSelf->__Vdly__matrix_img_vsync_r2 = 0U;
        vlSelf->__PVT__matrix_img_de_r1 = 0U;
        vlSelf->__PVT__matrix_img_href_r1 = 0U;
        vlSelf->__PVT__matrix_img_vsync_r1 = 0U;
        vlSelf->__PVT__matrix_edge_flag_r1 = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__bottom_edge_flag = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__top_edge_flag = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt = 0U;
        __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__hcnt = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vcnt = 0U;
        vlSelf->__PVT__matrix_p21 = 0U;
        vlSelf->__PVT__matrix_p11 = 0U;
        vlSelf->__PVT__matrix_p31 = 0U;
        vlSelf->__PVT__matrix_p22 = 0U;
        vlSelf->__PVT__matrix_p12 = 0U;
        vlSelf->__PVT__matrix_p32 = 0U;
        vlSelf->__PVT__matrix_p23 = 0U;
        vlSelf->__PVT__matrix_p13 = 0U;
        vlSelf->__PVT__matrix_p33 = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__de 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__de;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__href 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__href;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__left_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__right_edge_flag;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__vsync 
            = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__vsync;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_en_dly = 0U;
        vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__per_img_href_dly = 0U;
    }
    vlSelf->__PVT__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt 
        = __Vdly__u_Matrix_Generate_3X3_8Bit__DOT__extend_last_row_cnt;
}
