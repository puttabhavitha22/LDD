#include<linux/module.h>
#include<linux/kernel.h>
#include<linux/init.h>
#include<linux/io.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bhavitha");
MODULE_DESCRIPTION("Simple I2C BSC Driver Skeleton");


#define BSC1_BASE   0x7E804000
#define BSC1_SIZE   0x1000


#define BSC_C       0X00
#define BSC_S       0X04
#define BSE_DLEN    0X08
#define BSE_A       0X0C
#define BSE_FIFO    0X10

static void __iomem *base_add;


static int init_bsc_driver(void)
{

	pr_info("BSC I2C Driver Init\n");
	base_add=ioremap(BSC1_BASE,BSC1_SIZE);
	if(!base_add)
	{
		 pr_err("Failed to ioremap BSC1\n");
		 return -ENOMEM;
	}
	pr_info("BSC1 i2c driver %d \n",base_add);
	return 0;
}
static void exit_bsc_driver(void)
{
	pr_info("BSC I2C Driver Exit\n");

    if (base_add)
        iounmap(base_add);
}
module_init(init_bsc_driver);
module_exit(exit_bsc_driver);
