#include "Vsim_top.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(int argc, char **argv) {
    VerilatedContext *contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    const char *trace_env = std::getenv("SIM_TRACE");
    const bool trace_enable = !(trace_env && std::strcmp(trace_env, "0") == 0);
    const char *trace_depth_env = std::getenv("SIM_TRACE_DEPTH");
    int trace_depth = trace_depth_env ? std::atoi(trace_depth_env) : 8;
    if (trace_depth <= 0)
        trace_depth = 8;
    contextp->traceEverOn(trace_enable);

    Vsim_top *dut = new Vsim_top{contextp};

    VerilatedFstC *fst = nullptr;
    if (trace_enable) {
        fst = new VerilatedFstC;
        dut->trace(fst, trace_depth);
        fst->open("wave.fst");
    }

    // Run until $finish or timeout
    while (!contextp->gotFinish()) {
        dut->eval();
        if (fst)
            fst->dump(contextp->time());
        if (!dut->eventsPending())
            break;
        contextp->time(dut->nextTimeSlot());
    }

    if (fst)
        fst->close();
    delete fst;
    delete dut;
    vluint64_t sim_time = contextp->time();
    delete contextp;

    printf("[sim_main] done, %llu time steps\n", (unsigned long long)sim_time);
    return 0;
}
