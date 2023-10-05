#include <stdio.h>

int print_fibonacci_numbers(int i)
{
	if (i <= 1)
	{
		return i;
	}
	else
	{
		return print_fibonacci_numbers(i - 1) + print_fibonacci_numbers(i - 2);
	}
}

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("The No_ %d fibonacci number is: %d\n", i + 1, print_fibonacci_numbers(i));
	}
	return (0);
}
