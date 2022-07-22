// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAES_256__SYMS_H_
#define VERILATED_VAES_256__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaes_256.h"

// INCLUDE MODULE CLASSES
#include "Vaes_256___024root.h"

// SYMS CLASS (contains all model state)
class Vaes_256__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaes_256* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaes_256___024root             TOP;

    // CONSTRUCTORS
    Vaes_256__Syms(VerilatedContext* contextp, const char* namep, Vaes_256* modelp);
    ~Vaes_256__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
