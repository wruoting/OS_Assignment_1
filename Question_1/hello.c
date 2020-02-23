// Simple Linux Kernel
#include <linux/kernel.h>
#include <linux/module.h>

int init_module(void)
{
	printk(KERN_INFO "Hello from Ruoting Wang!\n");
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye from Ruoting Wang!\n");
	return;
}
MODULE_LICENSE("GPL");
