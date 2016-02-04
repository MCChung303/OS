#include <stdio.h>
#include <sys/syscall.h>
#include <linux/unistd.h>

int main()
{
         long int x = syscall(323);
		 printf("%ld" , x );
         return 0;
}
