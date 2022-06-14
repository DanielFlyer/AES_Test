// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_aes_128.h for the primary calling header

#ifndef VERILATED_VTEST_AES_128___024ROOT_H_
#define VERILATED_VTEST_AES_128___024ROOT_H_  // guard

#include "verilated.h"

class Vtest_aes_128__Syms;
VL_MODULE(Vtest_aes_128___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vtest_aes_128__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest_aes_128___024root(Vtest_aes_128__Syms* symsp, const char* name);
    ~Vtest_aes_128___024root();
    VL_UNCOPYABLE(Vtest_aes_128___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
