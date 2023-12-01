#include <stdlib.h>
#include <stdio.h>

void fun1(void)
{
	printf("fun1\n");
}
void fun2(void)
{
	printf("fun2\n");
}

void wrapper(void (*ptr)())
{
	ptr();
}

int main(void)
{
	wrapper(fun1);
	wrapper(fun2);

	return (0);
}
