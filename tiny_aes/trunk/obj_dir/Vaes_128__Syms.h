// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAES_128__SYMS_H_
#define VERILATED_VAES_128__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaes_128.h"

// INCLUDE MODULE CLASSES
#include "Vaes_128___024root.h"

// SYMS CLASS (contains all model state)
class Vaes_128__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaes_128* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaes_128___024root             TOP;

    // CONSTRUCTORS
    Vaes_128__Syms(VerilatedContext* contextp, const char* namep, Vaes_128* modelp);
    ~Vaes_128__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
