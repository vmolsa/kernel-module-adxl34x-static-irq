#ifndef HAVE_ADXL34X_STATIC_IRQ

#include <linux/gpio.h>

#define HAVE_ADXL34X_STATIC_IRQ

// P8_3 => gpio_38

#define ADXL34X_STATIC_IRQ gpio_to_irq(38);

#endif

