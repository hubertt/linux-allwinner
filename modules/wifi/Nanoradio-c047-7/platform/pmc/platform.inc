KERNEL_DIR = $(PMC_KERNEL_DIR)
CROSS_COMPILE = $(PMC_CROSS_COMPILE)
KERNEL_MAJOR_VERSION=2.4

HOST_PLATFORM_SRC_DIR=pmc
TRANSPORT=sdio
HOST=arm-linux

KERNEL_INC += -I$(KERNEL_DIR)/include/asm-arm/arch-uniphier2m
PLATFORM_INC += kernel/sdio/$(HOST_PLATFORM_SRC_DIR)/arch-uniphier2m
PLATFORM_FLAGS=-DCONFIG_PREEMPT=1 -DUSE_4BIT_SDIO -DUSE_FAST_BOOT
PLATFORM_FLAGS+=-DUSE_IF_REINIT -DUSE_NO_MSLEEP 