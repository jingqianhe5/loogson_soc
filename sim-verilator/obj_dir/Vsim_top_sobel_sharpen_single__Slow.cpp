// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top__Syms.h"
#include "Vsim_top_sobel_sharpen_single.h"

void Vsim_top_sobel_sharpen_single___ctor_var_reset(Vsim_top_sobel_sharpen_single* vlSelf);

Vsim_top_sobel_sharpen_single::Vsim_top_sobel_sharpen_single(Vsim_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_top_sobel_sharpen_single___ctor_var_reset(this);
}

void Vsim_top_sobel_sharpen_single::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsim_top_sobel_sharpen_single::~Vsim_top_sobel_sharpen_single() {
}
