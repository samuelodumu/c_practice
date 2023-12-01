#include <stdio.h>
#include <stdlib.h>

int compar(const void *a, const void *b)
{
	return ( *(int*)a - *(int*)b );
}

int main(void)
{
	int arr[] = {25, 10, 399, 42, 14, 500};
	unsigned int n = sizeof(arr) / sizeof(arr[0]), i;

	qsort(arr, n, sizeof(int), compar);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
	return (0);
}
