KERNEL_DIR = $(OW_KERNEL_DIR)
CROSS_COMPILE = $(OW_CROSS_COMPILE)
KERNEL_MAJOR_VERSION=2.6

HOST_PLATFORM_SRC_DIR=stmp36
TRANSPORT=sdio
HOST=arm-linux
export ARCH=arm

KERNEL_INC += -I$(KERNEL_DIR)/kernel2.6.16/linux-2.6/include/asm/arch
PLATFORM_FLAGS=-DENABLE_SOFT_SHUTDOWN