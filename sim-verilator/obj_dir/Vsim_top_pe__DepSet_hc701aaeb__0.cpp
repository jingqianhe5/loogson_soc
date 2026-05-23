// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_pe.h"

VL_INLINE_OPT void Vsim_top_pe___eval_initial__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst(Vsim_top_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_pe___eval_initial__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 0U;
    vlSelf->__PVT__mul_overflow = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__add_overflow = 0U;
}

VL_INLINE_OPT void Vsim_top_pe___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2(Vsim_top_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_pe___nba_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__1__KET____DOT__pe_inst__2\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 
        (0x1ffffU & (VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi) 
                                            << 8U) 
                                           | (IData)(vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf))) 
                     + VL_EXTENDS_II(17,16, (((IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi) 
                                              << 8U) 
                                             | (IData)(vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf)))));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 
        (0x1ffU & (vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr 
                   >> 8U));
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf 
        = (0xffU & vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr);
    if ((IData)((0x80U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0xffU;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x7fU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else if ((IData)((0x100U == (0x180U & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini))))) {
        vlSelf->__PVT__add_overflow = 1U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0x80U | (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi));
    } else {
        vlSelf->__PVT__add_overflow = 0U;
        vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi 
            = (0xffU & (IData)(vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini));
    }
}

VL_INLINE_OPT void Vsim_top_pe___eval_initial__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst(Vsim_top_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_pe___eval_initial__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__1__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst\n"); );
    // Body
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__mul_overflow = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__overflow = 0U;
    vlSelf->__PVT__add_overflow = 0U;
}
