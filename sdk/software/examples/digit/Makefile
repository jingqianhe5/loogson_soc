TARGET = digit

CFLAGS += -O3 -g
CFLAGS += -DSIMU=1

C_SRCS := $(wildcard ./*.c)

OBJDIR = obj
COMMON_DIR = ../../bsp
GCC_DIR=../../../toolchains/loongson-gnu-toolchain-8.3-x86_64-loongarch32r-linux-gnusf-v2.0
PICOLIBC_DIR=../../../toolchains/picolibc

DIGIT_MODEL_JSON := ../../../../rtl/ip/tpu/digit8x8_linear_weights.json
POST_IMAGE_CMD = python3 ./make_digit_image.py --cpu-bin $(OBJDIR)/$(TARGET).bin --model-json $(DIGIT_MODEL_JSON) --out-dir $(OBJDIR) && cp $(OBJDIR)/digit_full.bin $(OBJDIR)/$(TARGET).bin
FULL_BIN_COPY = $(OBJDIR)/digit_full.bin

include ../../bsp/common.mk
