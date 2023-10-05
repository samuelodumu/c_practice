#include <stdio.h>

const int MAX = 4;
int main(void)
{
	int i = 0, *ptr;
	int arr[] = {12, 14, 16, 20};
	ptr = arr;

	while (ptr < &arr[MAX])
	{
		printf("The memory location of arr[%d] is %p\n", i, ptr);
		printf("The value of arr[%d] is %d\n", i, *ptr);

		ptr++;
		i++;
	}
}
