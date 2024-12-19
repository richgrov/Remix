#ifndef REMIX_RCC_H_
#define REMIX_RCC_H_

#include <stdint-gcc.h>

typedef enum {
   AHB1_ENABLE_GPIOA = (1UL << 0),
   AHB1_ENABLE_GPIOB = (1UL << 1),
   AHB1_ENABLE_GPIOC = (1UL << 2),
} Ahb1Enable;

typedef enum {
   APB1_UART2_ENABLE = (1 << 17),
   APB1_UART3_ENABLE = (1 << 18),
   APB1_UART4_ENABLE = (1 << 19),
   APB1_UART5_ENABLE = (1 << 20),
} Apb1Enable;

typedef enum {
   APB2_SYSCFG_ENABLE = (1 << 14),
} Apb2Enable;

void rcc_ahb1_set(uint32_t enable);
void rcc_apb1_set(uint32_t enable);
void rcc_apb2_set(uint32_t enable);

#endif // !REMIX_RCC_H_
