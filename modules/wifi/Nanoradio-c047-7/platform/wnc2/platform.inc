KERNEL_DIR=$(WNC2_KERNEL_DIR)
CROSS_COMPILE=$(WNC2_CROSS_COMPILE)
KERNEL_MAJOR_VERSION=2.6

HOST_PLATFORM_SRC_DIR=mm6
TRANSPORT=sdio
HOST=arm-linux

# avoid dynamic linkage to old glibc when building with newer GNU tools
LDFLAGS=-static

PLATFORM_FLAGS=-DCONFIG_MM6PLUS_CLOCK -DSDIO_SLOT_A
#PLATFORM_OBJ=kernel/sdio/$(HOST_PLATFORM_SRC_DIR)/mm6p_clock.o
#OO_FILES=kernel/sdio/$(HOST_PLATFORM_SRC_DIR)/mm6p_clock