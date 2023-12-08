#include <stdio.h>

int main(void)
{
	int i, n = 3, arr[3] = {3, 4, 5};

	printf("Elements before deletion\n");
	for (i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i , arr[i]);
	}

	printf("Deleting element at index 1...\n");
	for (i = 1; i < n; i++)
	{
		arr[i] = arr[i + 1];
		n--;
	}
	printf("Elements after deletion\n");
	for (i = 0; i < n; i++)
	{
		printf("arr[%d] = %d\n", i , arr[i]);
	}
	return (0);
}
