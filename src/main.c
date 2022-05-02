#include <zephyr.h>

void main(void)
{
	printk("Zephyr Project sample project...\n");
	
	while (1) {
		printk("Hello World!\n");

		k_sleep(K_MSEC(1000));
	}
}

