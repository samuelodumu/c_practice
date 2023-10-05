#include <stdio.h>

void main(void)
{
	int i = 100;
	char c = 'B';
	int *ip = &i;
	char *cp = &c;

	printf("The value of i is: %d\n", i);
	printf("The value of c is: %d (\"%c\")\n", c, c);
	printf("The address of i is %p\n", &i);
	printf("The value of 'ip' is %p\n", ip);
	printf("The address of c is: %p\n", &c);
	printf("The value of 'cp' is %p\n", cp);
	
	*ip = 120;
	*cp = 'J';

	printf("The new value of i is: %d\n", i);
	printf("The new value of c is: %d (\"%c\")\n", c, c);
}
