#include <stdlib.h>
#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}
int subtract(int a, int b)
{
	return (a - b);
}
int multiply(int a, int b)
{
	return (a * b);
}

int main(void)
{
	int (*operation[])(int, int) = {add, subtract, multiply};
	int num, a = 12, b = 10;

	printf("Enter choice: 0 for addition, 1 for subtraction and 2 for multiplication of the numbers 12 and 10 ");
	scanf("%d", &num);

	if (num > 2)
	{
		return (0);
	}

	printf("%d\n", operation[num](a, b));

	return (0);
}
