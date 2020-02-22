// Simple Linux Kernel
#include <linux/kernel.h>
#include <linux/module.h>

int init_module(void)
{
	printk(KERN_INFO "Hello, Operating Systems!\n");
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye, Operating Systems!\n");
	return;
}
MODULE_LICENSE("GPL");
