#include <stdio.h>

int main(void)
{
	const int MAX = 4;
	int arr[] = {10, 15, 25, 30};
	int i, *ip;
	ip = arr;

	printf("Incrementing pointers\n");
	for (i = 0; i < MAX; i++)
	{
		// loop through the memory addresses of all the elements in the array
		printf("The memory address of arr[%d] is %p.\n", i, ip);

		// loop through the elements in the array
		printf("The value of arr[%d] is %d.\n", i, *ip);

		// increment pointer
		ip++;
	}
	putchar('\n');

	printf("Decrementing pointers\n");
	ip = &arr[MAX - 1];
	for (i = MAX - 1; i > 0; i--)
	{
		printf("The memory location of var[%d] is %p\n", i, ip);
		printf("The value of arr[%d] is %d\n", i, *ip);
		ip--;
	}
	putchar('\n');
	return (0);
}
