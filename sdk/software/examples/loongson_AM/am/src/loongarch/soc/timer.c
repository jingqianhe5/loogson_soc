#include <am.h>

extern unsigned long CONFREG_TIMER_BASE;
extern unsigned long CONFREG_CLOCKS_PER_SEC;
extern unsigned long CORE_CLOCKS_PER_SEC;

#define USEC_PER_SEC 1000000UL

static inline unsigned long get_confreg_clock_count(void) {
  unsigned long count;
  asm volatile(
    "la.local $r25, CONFREG_TIMER_BASE\n\t"
    "ld.w $r25, $r25, 0\n\t"
    "ld.w %0, $r25, 0\n\t"
    : "=r"(count)
    :
    : "$r25"
  );
  return count;
}

static inline unsigned long get_cpu_clock_count(void) {
  unsigned long count;
  asm volatile("rdcntvl.w %0" : "=r"(count));
  return count;
}

static inline unsigned long get_us(void) {
#ifdef USE_CPU_CLOCK_COUNT
  return get_cpu_clock_count() / (CORE_CLOCKS_PER_SEC / USEC_PER_SEC);
#else
  return get_confreg_clock_count() / (CONFREG_CLOCKS_PER_SEC / USEC_PER_SEC);
#endif
}

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = get_us();
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 1;
  rtc->month  = 1;
  rtc->year   = 1970;
}
