#include <stdint.h>
#include <stdio.h>

#include "confreg_time.h"
#include "digit_cpu_model_data.h"

// BSP 需要这些全局变量来完成串口和时钟参数初始化。
unsigned long UART_BASE = 0xbf000000;
unsigned long CONFREG_TIMER_BASE = 0xbf20f100;
unsigned long CONFREG_CLOCKS_PER_SEC = 50000000L;
unsigned long CORE_CLOCKS_PER_SEC = 33000000L;

static void print_inference_time(unsigned long start_cycle, unsigned long end_cycle) {
    const unsigned long elapsed_cycles = end_cycle - start_cycle;
    const unsigned long elapsed_us =
        (unsigned long)(((unsigned long long)elapsed_cycles * 1000000ull) /
                        (unsigned long long)CORE_CLOCKS_PER_SEC);

    printf("[tpu_digit] inference cycles        = %lu\n", elapsed_cycles);
    printf("[tpu_digit] inference time          = %lu us\n", elapsed_us);
    printf("[tpu_digit] inference time          = %lu.%03lu ms\n",
           elapsed_us / 1000ul,
           elapsed_us % 1000ul);
}

static int32_t q8_8_mul(int16_t a, int16_t b) {
    return ((int32_t)a * (int32_t)b) >> 8;
}

static void cpu_digit_infer(int16_t logits[10]) {
    volatile const int16_t *sample = digit_cpu_sample;
    volatile const int16_t (*weights)[10] = digit_cpu_weights;
    volatile const int16_t *bias = digit_cpu_bias;

    for (int cls = 0; cls < 10; cls++) {
        logits[cls] = 0;
    }

    for (int c_tile = 0; c_tile < 2; c_tile++) {
        for (int k_tile = 0; k_tile < 8; k_tile++) {
            for (int lane = 0; lane < 8; lane++) {
                const int cls = c_tile * 8 + lane;
                if (cls >= 10) {
                    continue;
                }

                int32_t partial = 0;
                for (int k = 0; k < 8; k++) {
                    const int pix = k_tile * 8 + k;
                    partial += q8_8_mul(sample[pix], weights[pix][cls]);
                }
                if (k_tile == 7) {
                    partial += (int32_t)bias[cls];
                }
                logits[cls] = (int16_t)(logits[cls] + (int16_t)partial);
            }
        }
    }
}

int main(void) {
    printf("[tpu_digit] opening...\n");

    // CPU-only 版本保留 digit 的串口行格式，方便和 TPU 版本做逐行对比。
    uint32_t status = 0;
    printf("[tpu_digit] clear                   status  value= 0x%08x\n", status);

    int16_t logits[10];
    const unsigned long infer_start_cycle = get_clock_count();

    printf("[tpu_digit] tpu  start working!!!   status  value= 0x%08x\n", status);
    cpu_digit_infer(logits);

    status = 0x00000002u;
    const unsigned long infer_end_cycle = get_clock_count();

    printf("[tpu_digit] finish   all!!!         status = 0x%08x\n", status);
    print_inference_time(infer_start_cycle, infer_end_cycle);
    printf("[tpu_digit] forward  result :\n");

    int best_idx = 0;
    int16_t best_val = logits[0];
    for (int i = 0; i < 10; i++) {
        const int16_t raw = logits[i];
        const int magnitude = raw < 0 ? -(int)raw : (int)raw;
        printf("  class %d: raw=%6d  q8.8=%d.%03d\n",
               i,
               (int)raw,
               (int)(raw / 256),
               (int)((magnitude % 256) * 1000 / 256));
        if (raw > best_val) {
            best_val = raw;
            best_idx = i;
        }
    }
    printf("-------------------------------------------\n");
    printf("--------------------result-----------------\n");
    printf("-------------------------------------------\n");
    printf("[tpu_digit] prediction = %d\n", best_idx);
    printf("[tpu_digit] best raw   = %d\n", (int)best_val);

    while (1) {
    }

    return 0;
}
