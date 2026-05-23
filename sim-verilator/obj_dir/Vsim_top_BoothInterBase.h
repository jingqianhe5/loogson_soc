// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsim_top.h for the primary calling header

#ifndef VERILATED_VSIM_TOP_BOOTHINTERBASE_H_
#define VERILATED_VSIM_TOP_BOOTHINTERBASE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"

class Vsim_top__Syms;

class Vsim_top_BoothInterBase final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(y,2,0);
    VL_OUT8(Carry,0,0);
    CData/*0:0*/ __PVT__negx;
    CData/*0:0*/ __PVT__x;
    CData/*0:0*/ __PVT__neg2x;
    CData/*0:0*/ __PVT___2x;
    CData/*0:0*/ uu__DOT____VdfgTmp_hf6cd5b06__0;
    CData/*0:0*/ uu__DOT____VdfgTmp_he6224cd4__0;
    VL_IN64(InX,63,0);
    VL_OUT64(OutX,63,0);
    VlUnpacked<CData/*1:0*/, 65> __PVT__CarrySig;

    // INTERNAL VARIABLES
    Vsim_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsim_top_BoothInterBase(Vsim_top__Syms* symsp, const char* v__name);
    ~Vsim_top_BoothInterBase();
    VL_UNCOPYABLE(Vsim_top_BoothInterBase);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
