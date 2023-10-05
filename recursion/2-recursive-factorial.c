#include <stdio.h>

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else 
	{
		return (n * factorial(n - 1));
	}
}

int main(void)
{
	int p;

	p = factorial(6);
	printf("6! is %d\n", p);

	return (0);
}
