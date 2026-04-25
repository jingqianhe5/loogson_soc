#include "regdef.h"

.extern UART_BASE

.section .init
.globl _start
.type _start, @function

_start:
  # Initialize all general-purpose registers.
  addi.w $r1, zero, 0x0;  addi.w $r2, zero, 0x0;  addi.w $r3, zero, 0x0;  addi.w $r4, zero, 0x0;
  addi.w $r5, zero, 0x0;  addi.w $r6, zero, 0x0;  addi.w $r7, zero, 0x0;  addi.w $r8, zero, 0x0;
  addi.w $r9, zero, 0x0;  addi.w $r10, zero, 0x0; addi.w $r11, zero, 0x0; addi.w $r12, zero, 0x0;
  addi.w $r13, zero, 0x0; addi.w $r14, zero, 0x0; addi.w $r15, zero, 0x0; addi.w $r16, zero, 0x0;
  addi.w $r17, zero, 0x0; addi.w $r18, zero, 0x0; addi.w $r19, zero, 0x0; addi.w $r20, zero, 0x0;
  addi.w $r21, zero, 0x0; addi.w $r22, zero, 0x0; addi.w $r23, zero, 0x0; addi.w $r24, zero, 0x0;
  addi.w $r25, zero, 0x0; addi.w $r26, zero, 0x0; addi.w $r27, zero, 0x0; addi.w $r28, zero, 0x0;
  addi.w $r29, zero, 0x0; addi.w $r30, zero, 0x0; addi.w $r31, zero, 0x0;

#if has_cache==1
  li.w t0, 0x0
  li.w t2, cache_index_depth
1:
  slli.w t1, t0, cache_offset_width
#if cache_way==1
  cacop 0x00, t1, 0x0
  cacop 0x01, t1, 0x0
#elif cache_way==2
  cacop 0x00, t1, 0x0
  cacop 0x00, t1, 0x1
  cacop 0x01, t1, 0x0
  cacop 0x01, t1, 0x1
#elif cache_way==4
  cacop 0x00, t1, 0x0
  cacop 0x00, t1, 0x1
  cacop 0x00, t1, 0x2
  cacop 0x00, t1, 0x3
  cacop 0x01, t1, 0x0
  cacop 0x01, t1, 0x1
  cacop 0x01, t1, 0x2
  cacop 0x01, t1, 0x3
#endif
  addi.w t0, t0, 0x1
  bne t0, t2, 1b
#else
  li.w t0, 0x1
  csrwr t0, 0x101
#endif

  # Enable direct address mode and initialize DMW.
  li.w t0, 0x8
  li.w t1, 0x18
  csrxchg t0, t1, 0x0

  csrwr zero, csr_dmw0
  csrwr zero, csr_dmw1
  li.w t0, 0x09
  csrwr t0, csr_dmw0
  li.w t0, 0xa0000009
  csrwr t0, csr_dmw1

  li.w t0, 0x10
  li.w t1, 0x18
  csrxchg t0, t1, 0x0

  # Copy .data from load address to runtime address.
  la.local t0, _data_lma
  la.local t1, _data
  la.local t2, _edata
  bgeu t1, t2, 3f
2:
  ld.w t3, t0, 0
  st.w t3, t1, 0
  addi.w t0, t0, 4
  addi.w t1, t1, 4
  bltu t1, t2, 2b
3:

  # Clear .bss.
  la.local t0, __bss_start
  la.local t1, _end
  bgeu t0, t1, 5f
4:
  st.w zero, t0, 0
  addi.w t0, t0, 4
  bltu t0, t1, 4b
5:

#if has_cache==1
  li.w t0, 0x19
  csrwr t0, csr_dmw0
#endif

  # Initialize UART16550.
  la.local t0, UART_BASE
  ld.w t1, t0, 0
  li.w t2, 0x07
  st.b t2, t1, 2
  li.w t2, 0x80
  st.b t2, t1, 3
  li.w t2, 0x00
  st.b t2, t1, 1
  li.w t3, 0xbf20f500
  ld.w t3, t3, 0
  li.w t2, 0x1b
  beq zero, t3, 6f
  li.w t2, 0x1
6:
  st.b t2, t1, 0
  li.w t2, 0x3
  st.b t2, t1, 3
  li.w t2, 0x0
  st.b t2, t1, 4

  la.local sp, _stack
  bl _trm_init

1:
  b 1b
