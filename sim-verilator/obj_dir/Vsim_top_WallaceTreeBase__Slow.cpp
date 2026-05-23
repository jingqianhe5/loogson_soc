// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim_top.h for the primary calling header

#include "verilated.h"

#include "Vsim_top_WallaceTreeBase.h"
#include "Vsim_top__Syms.h"

void Vsim_top_WallaceTreeBase___ctor_var_reset(Vsim_top_WallaceTreeBase* vlSelf);

Vsim_top_WallaceTreeBase::Vsim_top_WallaceTreeBase(Vsim_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsim_top_WallaceTreeBase___ctor_var_reset(this);
}

void Vsim_top_WallaceTreeBase::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsim_top_WallaceTreeBase::~Vsim_top_WallaceTreeBase() {
}
