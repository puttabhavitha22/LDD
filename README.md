# LDD
# I2C simple driver
his is a simple Linux kernel module that demonstrates how to access the Broadcom Serial Controller (BSC/I²C) peripheral on the Raspberry Pi. It uses memory-mapped I/O (MMIO) to read and write I²C controller registers.

Maps the physical I²C controller base address to kernel virtual memory using ioremap().

Accesses key I²C registers:

BSC_C: Control register

BSC_S: Status register

BSC_DLEN: Data length

BSC_A: Slave address

BSC_FIFO: FIFO data buffer

Prints initialization and mapping status to the kernel log.

Demonstrates safe register access using readl() and writel().
