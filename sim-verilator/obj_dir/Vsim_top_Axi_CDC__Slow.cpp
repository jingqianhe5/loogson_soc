// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_Axi_CDC.h"
#include "Vsim_top__Syms.h"

void Vsim_top_Axi_CDC___ctor_var_reset(Vsim_top_Axi_CDC* vlSelf);

Vsim_top_Axi_CDC::Vsim_top_Axi_CDC(Vsim_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_top_Axi_CDC___ctor_var_reset(this);
}

void Vsim_top_Axi_CDC::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsim_top_Axi_CDC::~Vsim_top_Axi_CDC() {
}
