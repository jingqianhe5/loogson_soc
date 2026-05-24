// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_sub_7(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_sub_7\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 21492);
    // Body
    bufp->chgCData(oldp+0,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+1,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                          [1U])));
    bufp->chgCData(oldp+2,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                           [1U]),2);
    bufp->chgCData(oldp+3,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                  [1U]))),3);
    bufp->chgCData(oldp+4,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+5,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+6,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+7,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+8,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+9,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+10,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+11,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+12,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+13,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+14,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+15,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+16,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+17,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+18,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+19,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+20,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+21,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+22,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+23,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+24,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+25,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+26,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+27,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+28,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+29,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+30,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+31,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+32,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+33,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+34,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+35,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+36,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+37,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+38,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+39,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+40,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+41,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+42,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+43,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+44,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+45,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+46,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+47,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+48,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+49,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+50,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+51,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+52,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+53,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+54,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+55,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+56,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+57,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+58,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+59,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+60,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+61,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+62,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+63,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+64,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+65,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+66,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+67,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+68,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+69,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+70,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+71,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+72,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+73,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+74,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+75,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+76,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+77,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+78,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+79,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+80,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+81,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+82,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+83,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+84,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+85,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+86,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+87,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+88,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+89,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+90,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+91,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+92,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+93,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+94,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+95,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+96,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+97,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+98,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+99,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+100,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+101,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+102,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+103,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+104,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+105,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+106,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+107,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+108,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+109,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+110,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+111,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+112,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+113,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+114,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+115,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+116,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+117,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+118,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+119,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+120,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+121,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+122,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+123,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+124,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+125,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+126,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+127,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+128,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+129,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+130,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+131,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+132,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+133,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+134,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+135,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+136,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+137,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+138,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+139,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+140,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+141,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+142,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+143,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+144,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+145,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+146,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+147,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+148,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+149,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+150,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+151,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+152,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+153,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+154,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+155,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+156,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+157,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+158,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+159,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+160,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+161,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+162,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+163,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+164,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+165,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+166,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+167,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+168,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+169,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+170,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+171,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+172,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+173,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+174,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+175,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+176,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+177,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+178,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+179,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+180,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+181,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+182,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+183,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+184,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+185,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+186,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+187,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+188,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+189,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+190,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+191,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
}

void Vsim_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_cleanup\n"); );
    // Init
    Vsim_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim_top___024root*>(voidSelf);
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    IData/*31:0*/ __Vilp;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vilp = 0U;
    while ((__Vilp <= 0x44U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
