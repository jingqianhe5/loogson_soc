TOOLCHAIN_HOME := $(abspath $(AM_HOME)/../../../toolchains/loongson-gnu-toolchain-8.3-x86_64-loongarch32r-linux-gnusf-v2.0)
export PATH := $(TOOLCHAIN_HOME)/bin:$(PATH)

CROSS_COMPILE := loongarch32r-linux-gnusf-
COMMON_FLAGS  := -fno-pic
CFLAGS        += $(COMMON_FLAGS) -static
ASFLAGS       += $(COMMON_FLAGS) -O0
