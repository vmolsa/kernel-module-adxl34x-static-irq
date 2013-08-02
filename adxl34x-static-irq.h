#ifndef HAVE_ADXL34X_STATIC_IRQ

#include <linux/gpio.h>

// P8_42 @ beaglebone black => gpio_75

#define HAVE_ADXL34X_STATIC_IRQ 75
#define ADXL34X_STATIC_IRQ gpio_to_irq(HAVE_ADXL34X_STATIC_IRQ);

#endif

