// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_192.h for the primary calling header

#include "verilated.h"

#include "Vaes_192__Syms.h"
#include "Vaes_192___024root.h"

void Vaes_192___024root___ctor_var_reset(Vaes_192___024root* vlSelf);

Vaes_192___024root::Vaes_192___024root(Vaes_192__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaes_192___024root___ctor_var_reset(this);
}

void Vaes_192___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaes_192___024root::~Vaes_192___024root() {
}
