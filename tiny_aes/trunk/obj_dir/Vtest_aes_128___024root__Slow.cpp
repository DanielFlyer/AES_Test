// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_aes_128.h for the primary calling header

#include "verilated.h"

#include "Vtest_aes_128__Syms.h"
#include "Vtest_aes_128___024root.h"

void Vtest_aes_128___024root___ctor_var_reset(Vtest_aes_128___024root* vlSelf);

Vtest_aes_128___024root::Vtest_aes_128___024root(Vtest_aes_128__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtest_aes_128___024root___ctor_var_reset(this);
}

void Vtest_aes_128___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtest_aes_128___024root::~Vtest_aes_128___024root() {
}
