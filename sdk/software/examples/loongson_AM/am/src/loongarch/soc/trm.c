#include <am.h>
#include <loongarch/loongarch32r.h>
#include <klib-macros.h>

unsigned long __attribute__((weak)) UART_BASE = 0xbf000000;
unsigned long __attribute__((weak)) CONFREG_TIMER_BASE = 0xbf20f100;
unsigned long __attribute__((weak)) CONFREG_CLOCKS_PER_SEC = 50000000L;
unsigned long __attribute__((weak)) CORE_CLOCKS_PER_SEC = 33000000L;
static const uintptr_t UART_THR = 0x0;
static const uintptr_t UART_LSR = 0x5;
static const uint8_t UART_LSR_THRE = 0x20;

int main(const char *args);
extern char __heap_start;
extern char __heap_end;
extern void (*__preinit_array_start[])(void);
extern void (*__preinit_array_end[])(void);
extern void (*__init_array_start[])(void);
extern void (*__init_array_end[])(void);

Area heap = RANGE(&__heap_start, &__heap_end);
#ifdef MAINARGS
static const char mainargs[] = MAINARGS;
#else
static const char mainargs[] = "";
#endif

void putch(char ch) {
  while ((inb(UART_BASE + UART_LSR) & UART_LSR_THRE) == 0) {
  }
  outb(UART_BASE + UART_THR, (uint8_t)ch);
}

void halt(int code) {
  (void)code;
  while (1);
}

void _trm_init() {
  for (void (**p)(void) = __preinit_array_start; p < __preinit_array_end; p++) {//构造函数？
    (*p)();
  }
  for (void (**p)(void) = __init_array_start; p < __init_array_end; p++) {
    (*p)();
  }
  int ret = main(mainargs);
  halt(ret);
}
