#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

// Initialize this Module and load it into Kernel
static int hello_init(void)
{
	printk("hello world \n");
	return 0;
}

// Remove this Module from Kernel
static void hello_exit(void)
{
	printk("Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Putta Bhavitha");
MODULE_DESCRIPTION("First Program.");
