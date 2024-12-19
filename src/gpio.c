#include "gpio.h"

#include <stdbool.h>
#include <stdint-gcc.h>

struct Gpio {
   volatile uint32_t mode;
   volatile uint32_t output_type;
   volatile uint32_t output_speed;
   volatile uint32_t pull_up_down;
   volatile uint32_t input_data;
   volatile uint32_t output_data;
   volatile uint32_t bit_set_reset;
   volatile uint32_t config_lock;
   volatile uint32_t alt_func_low;
   volatile uint32_t alt_func_high;
};

void gpio_set_mode(volatile Gpio *gpio, uint8_t pin, GpioPortMode mode) {
   gpio->mode &= ~(3 << (pin * 2));
   gpio->mode |= mode << (pin * 2);
}

void gpio_write_pin(volatile Gpio *gpio, uint8_t pin, bool high) {
   gpio->bit_set_reset = 1 << pin << (high ? 0 : 16);
}
