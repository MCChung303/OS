#include <linux/kernel.h>
#include <linux/linkage.h>

asmlinkage long sys_simple_add(int number1, int number2, int* result)
{
	// prints number1 and number2
	printk(KERN_ALERT "Number 1: %d\n Number 2: %d\n", number1, number2);
	//adds together
	*result= number1 + number2;
	printk(KERN_ALERT "The sum of the two numbers is: %d\n", *result);
	
	return 0;
}





