#include <stdio.h>

const int MAX = 4;

void main(void)
{
	int i;
	char *arr[] = {
		"Lisa James",
		"Dorothy Emmanuel",
		"Bitrus Zainab",
		"Samuel Odumu"
	};

	for (i = 0; i < MAX; i++)
	{
		printf("The memory location of arr[%d] is: %p\n", i, arr[i]);
		printf("The value of arr[%d] is: %s\n", i, arr[i]);
	}
}


