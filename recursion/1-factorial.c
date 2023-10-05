#include <stdio.h>

int factorial(int n)
{
	int i, fact;
	fact = 1;

	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	printf("%d! is: %d\n", n, fact);

	return fact;
}

int main(void)
{
	int p;

	p = factorial(6);

	return 0;
}
