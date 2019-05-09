obj-m := foo.o

# location of kernel tree
KDIR := /lib/modules/$(shell uname -r)/build

# get current directory path from shell
MODULE_DIR := $(shell pwd)

all:
	$(MAKE) -C $(KDIR) M=$(MODULE_DIR) modules

clean:
	$(MAKE) -C $(KDIR) M=$(MODULE_DIR) clean
