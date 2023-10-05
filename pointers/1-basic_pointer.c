#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int myVar = 23;
	int *ptr = &myVar;

	printf("The memory location of myVar is: %p\n", ptr);
	printf("The value of myVar through the pointer is: %d\n", *ptr);

	return (0);
}
