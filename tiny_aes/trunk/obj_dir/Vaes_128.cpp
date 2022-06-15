// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaes_128.h"
#include "Vaes_128__Syms.h"

//============================================================
// Constructors

Vaes_128::Vaes_128(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vaes_128__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , state{vlSymsp->TOP.state}
    , key{vlSymsp->TOP.key}
    , out{vlSymsp->TOP.out}
    , __PVT__aes_128__DOT__r1{vlSymsp->TOP.__PVT__aes_128__DOT__r1}
    , __PVT__aes_128__DOT__r2{vlSymsp->TOP.__PVT__aes_128__DOT__r2}
    , __PVT__aes_128__DOT__r3{vlSymsp->TOP.__PVT__aes_128__DOT__r3}
    , __PVT__aes_128__DOT__r4{vlSymsp->TOP.__PVT__aes_128__DOT__r4}
    , __PVT__aes_128__DOT__r5{vlSymsp->TOP.__PVT__aes_128__DOT__r5}
    , __PVT__aes_128__DOT__r6{vlSymsp->TOP.__PVT__aes_128__DOT__r6}
    , __PVT__aes_128__DOT__r7{vlSymsp->TOP.__PVT__aes_128__DOT__r7}
    , __PVT__aes_128__DOT__r8{vlSymsp->TOP.__PVT__aes_128__DOT__r8}
    , __PVT__aes_128__DOT__r9{vlSymsp->TOP.__PVT__aes_128__DOT__r9}
    , __PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a1__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a2__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a3__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a4__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a5__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a6__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a7__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a8__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a9__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_0}
    , __PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_1}
    , __PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_2}
    , __PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__a10__DOT__S4_0__DOT__S_3}
    , __PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_0}
    , __PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_1}
    , __PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_2}
    , __PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_1__DOT__S_3}
    , __PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_0}
    , __PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_1}
    , __PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_2}
    , __PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_2__DOT__S_3}
    , __PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_0}
    , __PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_1}
    , __PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_2}
    , __PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_3__DOT__S_3}
    , __PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_0{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_0}
    , __PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_1{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_1}
    , __PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_2{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_2}
    , __PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_3{vlSymsp->TOP.__PVT__aes_128__DOT__rf__DOT__S4_4__DOT__S_3}
    , rootp{&(vlSymsp->TOP)}
{
}

Vaes_128::Vaes_128(const char* _vcname__)
    : Vaes_128(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vaes_128::~Vaes_128() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vaes_128___024root___eval_initial(Vaes_128___024root* vlSelf);
void Vaes_128___024root___eval_settle(Vaes_128___024root* vlSelf);
void Vaes_128___024root___eval(Vaes_128___024root* vlSelf);
QData Vaes_128___024root___change_request(Vaes_128___024root* vlSelf);
#ifdef VL_DEBUG
void Vaes_128___024root___eval_debug_assertions(Vaes_128___024root* vlSelf);
#endif  // VL_DEBUG
void Vaes_128___024root___final(Vaes_128___024root* vlSelf);

static void _eval_initial_loop(Vaes_128__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vaes_128___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vaes_128___024root___eval_settle(&(vlSymsp->TOP));
        Vaes_128___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vaes_128___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rtl/aes_128.v", 17, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vaes_128___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vaes_128::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaes_128::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaes_128___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vaes_128___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vaes_128___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("rtl/aes_128.v", 17, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vaes_128___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vaes_128::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vaes_128::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vaes_128::final() {
    Vaes_128___024root___final(&(vlSymsp->TOP));
}
