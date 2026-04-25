include $(AM_HOME)/scripts/isa/loongarch32r.mk

ARCH_H := arch/loongarch32r-nemu.h

ROOT_DIR := $(abspath $(AM_HOME)/../../../..)
SIM_MIF  := $(ROOT_DIR)/sdk/axi_ram.mif
CONVERT  := $(ROOT_DIR)/tmp/loongson_am_convert
MIF_FILE = $(WORK_DIR)/build/axi_ram.mif

INC_PATH += $(abspath $(AM_HOME)/../../bsp/include)
LDSCRIPTS += $(abspath $(AM_HOME)/../../bsp/env/separate.lds)

CFLAGS  += -DISA_H=\"loongarch/loongarch32r.h\"
CFLAGS  += -Dhas_cache=1 -Dcache_index_depth=0x100 -Dcache_offset_width=0x4 -Dcache_way=2
CFLAGS  += -DUSE_CPU_CLOCK_COUNT

AM_SRCS += loongarch/soc/start.S \
           loongarch/soc/trm.c \
           loongarch/soc/ioe.c \
           loongarch/soc/timer.c \
           loongarch/soc/input.c \
           loongarch/soc/cte.c \
           loongarch/soc/trap.S \
           loongarch/soc/vme.c \
           loongarch/soc/mpe.c

image: image-dep
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin
	@mkdir -p $(dir $(CONVERT))
	@gcc -o $(CONVERT) $(ROOT_DIR)/sdk/software/bsp/env/convert.c
	@$(CONVERT) $(notdir $(IMAGE).bin) $(dir $(IMAGE).bin)
	@cp $(MIF_FILE) $(SIM_MIF)
	@echo + COPY "->" $(shell realpath $(SIM_MIF) --relative-to .)

clean: loongarch32r-soc-clean

loongarch32r-soc-clean:
	-rm -f $(SIM_MIF) $(CONVERT)

.PHONY: loongarch32r-soc-clean
