// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_pe.h"

VL_ATTR_COLD void Vsim_top_pe___eval_static__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst(Vsim_top_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_pe___eval_static__TOP__sim_top__DOT__u_soc_top__DOT__u_tpu_axi_fetch_top__DOT__u_tpu_isa_confreg__DOT__u_tpu__DOT__systolic_inst__DOT__pe_row__BRA__0__KET____DOT__pe_col__BRA__0__KET____DOT__pe_inst\n"); );
    // Body
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 0U;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 0U;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0U;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi = 0U;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi = 0U;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf = 0U;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 0U;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 0U;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0U;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0U;
}

VL_ATTR_COLD void Vsim_top_pe___ctor_var_reset(Vsim_top_pe* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_top_pe___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst_n = 0;
    vlSelf->input_in = 0;
    vlSelf->input_out = 0;
    vlSelf->input_in_valid = 0;
    vlSelf->input_out_valid = 0;
    vlSelf->weight_in = 0;
    vlSelf->weight_out = 0;
    vlSelf->weight_valid = 0;
    vlSelf->psum_in = 0;
    vlSelf->psum_out = 0;
    vlSelf->switch_in = 0;
    vlSelf->switch_out = 0;
    vlSelf->pe_enabled = 0;
    vlSelf->__PVT__overflow_out = 0;
    vlSelf->__PVT__weight_in_active = 0;
    vlSelf->__PVT__weight_in_buffer = 0;
    vlSelf->__PVT__mul_overflow = 0;
    vlSelf->__PVT__add_overflow = 0;
    vlSelf->__PVT__mult__DOT__res = 0;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__inr = 0;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__ini = 0;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outi = 0;
    vlSelf->__PVT__mult__DOT__res_zoom__DOT__outf = 0;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__overflow = 0;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__inr = 0;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__ini = 0;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outi = 0;
    vlSelf->__PVT__adder__DOT__ina_zoom__DOT__outf = 0;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__overflow = 0;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__inr = 0;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__ini = 0;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outi = 0;
    vlSelf->__PVT__adder__DOT__inb_zoom__DOT__outf = 0;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__inr = 0;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__ini = 0;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outi = 0;
    vlSelf->__PVT__adder__DOT__res_zoom__DOT__outf = 0;
}
