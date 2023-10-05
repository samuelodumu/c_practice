#include <stdio.h>

int main(void)
{
	const int max = 4;
	int i, *ptr[max];
	int arr[] = {25, 30, 35, 40};

	for (i = 0; i < max; i++)
	{
		ptr[i] = &arr[i];
	}
	for (i = 0; i < max; i++)
	{
		printf("The value of arr[%d] is %d\n", i, *ptr[i]);
		printf("The memory location of arr[%d] is %p\n", i, ptr[i]);
	}
	return (0);
}
