// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_128.h for the primary calling header

#ifndef VERILATED_VAES_128_S_H_
#define VERILATED_VAES_128_S_H_  // guard

#include "verilated.h"

class Vaes_128__Syms;
VL_MODULE(Vaes_128_S) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in,7,0);
    VL_OUT8(out,7,0);

    // INTERNAL VARIABLES
    Vaes_128__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaes_128_S(Vaes_128__Syms* symsp, const char* name);
    ~Vaes_128_S();
    VL_UNCOPYABLE(Vaes_128_S);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
