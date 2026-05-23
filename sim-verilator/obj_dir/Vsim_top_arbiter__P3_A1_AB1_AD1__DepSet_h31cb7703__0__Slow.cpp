// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_arbiter__P3_A1_AB1_AD1.h"

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___eval_static__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___eval_static__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst\n"); );
    // Body
    vlSelf->__PVT__grant_reg = 0U;
    vlSelf->__PVT__grant_valid_reg = 0U;
    vlSelf->__PVT__grant_encoded_reg = 0U;
    vlSelf->__PVT__mask_reg = 0U;
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__4(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___stl_sequent__TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst__4\n"); );
    // Body
    vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[1U] 
        = ((2U & vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
            [1U]) | (0U != vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid
                     [0U]));
}

VL_ATTR_COLD void Vsim_top_arbiter__P3_A1_AB1_AD1___ctor_var_reset(Vsim_top_arbiter__P3_A1_AB1_AD1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_top_arbiter__P3_A1_AB1_AD1___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->request = 0;
    vlSelf->acknowledge = 0;
    vlSelf->grant = 0;
    vlSelf->grant_valid = 0;
    vlSelf->grant_encoded = 0;
    vlSelf->__PVT__grant_reg = 0;
    vlSelf->__PVT__grant_next = 0;
    vlSelf->__PVT__grant_valid_reg = 0;
    vlSelf->__PVT__grant_valid_next = 0;
    vlSelf->__PVT__grant_encoded_reg = 0;
    vlSelf->__PVT__grant_encoded_next = 0;
    vlSelf->__PVT__mask_reg = 0;
    vlSelf->__PVT__mask_next = 0;
    vlSelf->__Vcellinp__priority_encoder_masked__input_unencoded = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__priority_encoder_inst__DOT__stage_valid[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__priority_encoder_inst__DOT__stage_enc[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__priority_encoder_masked__DOT__stage_valid[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__priority_encoder_masked__DOT__stage_enc[__Vi0] = 0;
    }
}
