obj-m += adxl34x.o
obj-m += adxl34x-i2c.o
obj-m += adxl34x-spi.o

CROSS_COMPILE := arm-linux-gnueabi-
ARCH := arm
#KDIR := /usr/src/kernel/
KDIR := /home/dasmyller/linux-dev/KERNEL/

all:	
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) scripts
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) M=$(PWD) modules
 
clean:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) M=$(PWD) clean
