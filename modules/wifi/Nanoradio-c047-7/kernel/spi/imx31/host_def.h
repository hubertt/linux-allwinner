/**
*
*   See generic 'host.h' for details
*/
#ifndef _HOST_DEF_H
#define _HOST_DEF_H

//#define SPI_IF_TEST
//#define USE_SDIO_IRQ
#define USE_FW_DOWNLOAD
#define USE_NO_CLOCK
#define GPIO_DEBUG
#define USE_POWER_MANAGEMENT
//#define JTAG_CONNECTION

//#define USE_TRACE
//#define USE_PRINTBUF

#include <asm/hardware.h>

#ifdef USE_SDIO_IRQ
#define HOST_ATTENTION_SPI     0x01
#else
#define HOST_ATTENTION_SPI     0x5a
#endif

#define TARGET_IRQ_PIN		MX31_PIN_GPIO1_6
#define TARGET_IRQ_NUM		IOMUX_TO_IRQ(TARGET_IRQ_PIN)

#endif /* _HOST_DEF_H */