obj-m += hello_kernel.o

KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

default:
	$(MAKE) -Wall -C $(KDIR) SUBDIRS=$(PWD) modules
