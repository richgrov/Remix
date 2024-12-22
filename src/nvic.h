#ifndef REMIX_NVIC_H_
#define REMIX_NVIC_H_

#include <stdint-gcc.h>

typedef volatile uint32_t NvicEnable;

#define NVIC_ISER ((volatile NvicEnable *)0xE000E100)

static inline void nvic_enable(uint8_t irq) {
   NVIC_ISER[irq / 32] |= (1 << (irq % 32));
}

#endif // !REMIX_NVIC_H_
