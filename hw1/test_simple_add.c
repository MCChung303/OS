#include <stdio.h>
#include <sys/syscall.h>
#include <linux/unistd.h>

int main()
{

		int result= syscall(324,45,23,&result);
		printf("The result is %d\n",result);
		return 0;
}	
