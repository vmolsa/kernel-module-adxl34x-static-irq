#ifndef HAVE_ADXL34X_STATIC_IRQ

#include <linux/gpio.h>

#define HAVE_ADXL34X_STATIC_IRQ

// P8_42 @ beaglebone black => gpio_75

#define ADXL34X_STATIC_IRQ gpio_to_irq(75);

#endif

