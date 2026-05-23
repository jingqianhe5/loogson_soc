// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vsim_top__Syms.h"


void Vsim_top___024root__trace_chg_sub_7(Vsim_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim_top___024root__trace_chg_sub_7\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 21522);
    // Body
    bufp->chgCData(oldp+0,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+1,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+2,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+3,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+4,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+5,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+6,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+7,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_wr_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+8,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+9,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+10,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+11,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+12,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+13,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+14,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+15,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+16,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+17,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+18,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+19,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+20,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+21,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+22,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+23,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+24,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+25,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__0__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+26,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+27,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+28,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+29,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+30,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+31,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+32,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+33,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+34,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+35,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+36,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+37,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+38,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+39,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+40,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+41,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+42,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+43,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__1__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+44,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+45,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+46,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+47,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+48,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+49,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+50,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+51,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+52,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+53,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+54,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+55,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+56,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+57,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+58,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+59,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+60,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+61,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__2__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+62,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+63,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+64,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+65,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+66,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+67,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+68,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+69,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+70,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+71,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+72,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+73,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+74,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+75,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+76,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+77,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+78,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+79,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__3__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+80,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+81,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+82,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+83,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+84,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+85,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+86,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+87,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                           [1U])));
    bufp->chgCData(oldp+88,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                            [1U]),2);
    bufp->chgCData(oldp+89,((7U & ((IData)(1U) << vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                   [1U]))),3);
    bufp->chgCData(oldp+90,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+91,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+92,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+93,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+94,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+95,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+96,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+97,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__4__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+98,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+99,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+100,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+101,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+102,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+103,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+104,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+105,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+106,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+107,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+108,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+109,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+110,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+111,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+112,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+113,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+114,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+115,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__5__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+116,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+117,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+118,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+119,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+120,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+121,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+122,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+123,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+124,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+125,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+126,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+127,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+128,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+129,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+130,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+131,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+132,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+133,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__6__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+134,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_next),3);
    bufp->chgBit(oldp+135,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_valid_next));
    bufp->chgCData(oldp+136,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__grant_encoded_next),2);
    bufp->chgBit(oldp+137,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+138,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+139,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+140,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__mask_next),3);
    bufp->chgBit(oldp+141,((1U & vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid
                            [1U])));
    bufp->chgCData(oldp+142,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                             [1U]),2);
    bufp->chgCData(oldp+143,((7U & ((IData)(1U) << 
                                    vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc
                                    [1U]))),3);
    bufp->chgCData(oldp+144,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+145,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+146,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+147,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_inst__DOT__stage_enc[1]),2);
    bufp->chgCData(oldp+148,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[0]),2);
    bufp->chgCData(oldp+149,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_valid[1]),2);
    bufp->chgCData(oldp+150,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[0]),2);
    bufp->chgCData(oldp+151,(vlSymsp->TOP__sim_top__DOT__u_soc_top__DOT__u_AXI_top__DOT__u_axi_crossbar__DOT__axi_crossbar_rd_inst__DOT__m_ifaces__BRA__7__KET____DOT__a_arb_inst.__PVT__priority_encoder_masked__DOT__stage_enc[1]),2);
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
    while ((__Vilp <= 0x42U)) {
        vlSymsp->TOP.__Vm_traceActivity[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}
