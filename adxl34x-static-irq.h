#ifndef HAVE_ADXL34X_STATIC_IRQ

#include <linux/gpio.h>

#define HAVE_ADXL34X_STATIC_IRQ

#define ADXL34X_STATIC_IRQ gpio_to_irq(42);

#endif

