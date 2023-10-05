#include <stdio.h>

int main(void)
{
	int arr[2][2] = {{1, 2}, {3, 4}};

	printf("The memory location of arr[1][1] is %p\n", &arr[1][1]);
	printf("The memory location of arr[1][1] is %p\n", (arr + 1) + 1);
	return (0);
}
