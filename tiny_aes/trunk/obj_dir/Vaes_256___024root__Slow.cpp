// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_256.h for the primary calling header

#include "verilated.h"

#include "Vaes_256__Syms.h"
#include "Vaes_256___024root.h"

void Vaes_256___024root___ctor_var_reset(Vaes_256___024root* vlSelf);

Vaes_256___024root::Vaes_256___024root(Vaes_256__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vaes_256___024root___ctor_var_reset(this);
}

void Vaes_256___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vaes_256___024root::~Vaes_256___024root() {
}
