// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim_top.h for the primary calling header

#ifndef VERILATED_VSIM_TOP_ARBITER__P3_A1_AB1_AD1_H_
#define VERILATED_VSIM_TOP_ARBITER__P3_A1_AB1_AD1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vsim_top__Syms;

class Vsim_top_arbiter__P3_A1_AB1_AD1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(request,2,0);
    VL_IN8(acknowledge,2,0);
    VL_OUT8(grant,2,0);
    VL_OUT8(grant_valid,0,0);
    VL_OUT8(grant_encoded,1,0);
    CData/*2:0*/ __PVT__grant_reg;
    CData/*2:0*/ __PVT__grant_next;
    CData/*0:0*/ __PVT__grant_valid_reg;
    CData/*0:0*/ __PVT__grant_valid_next;
    CData/*1:0*/ __PVT__grant_encoded_reg;
    CData/*1:0*/ __PVT__grant_encoded_next;
    CData/*2:0*/ __PVT__mask_reg;
    CData/*2:0*/ __PVT__mask_next;
    CData/*2:0*/ __Vcellinp__priority_encoder_masked__input_unencoded;
    VlUnpacked<CData/*1:0*/, 2> __PVT__priority_encoder_inst__DOT__stage_valid;
    VlUnpacked<CData/*1:0*/, 2> __PVT__priority_encoder_inst__DOT__stage_enc;
    VlUnpacked<CData/*1:0*/, 2> __PVT__priority_encoder_masked__DOT__stage_valid;
    VlUnpacked<CData/*1:0*/, 2> __PVT__priority_encoder_masked__DOT__stage_enc;

    // INTERNAL VARIABLES
    Vsim_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_top_arbiter__P3_A1_AB1_AD1(Vsim_top__Syms* symsp, const char* v__name);
    ~Vsim_top_arbiter__P3_A1_AB1_AD1();
    VL_UNCOPYABLE(Vsim_top_arbiter__P3_A1_AB1_AD1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
