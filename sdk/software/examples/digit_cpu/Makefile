TARGET = digit_cpu

CFLAGS += -O3 -g
CFLAGS += -DSIMU=1

C_SRCS := $(wildcard ./*.c)

OBJDIR = obj
COMMON_DIR = ../../bsp
GCC_DIR=../../../toolchains/loongson-gnu-toolchain-8.3-x86_64-loongarch32r-linux-gnusf-v2.0
PICOLIBC_DIR=../../../toolchains/picolibc

include ../../bsp/common.mk

# Remove legacy full-bin artifacts from earlier generated-image versions.
CLEAN_OBJS += $(OBJDIR)/$(TARGET)_full.bin
