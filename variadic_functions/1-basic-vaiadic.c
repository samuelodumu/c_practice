#include <stdarg.h>
#include <stdio.h>

int add_all(int count, ...)
{
	va_list ap;
	int i, sum;

	va_start (ap, count);
	sum = 0;

	for (i = 0; i < count; i++)
	{
		sum += va_arg (ap, int);
	}
	va_end (ap);
	return (sum);
}

int main(void)
{
	printf("The sum of 12, 32, 53, 19 and 10 is: %d\n", add_all(5, 12, 32, 53, 19, 10));
	return (0);
}
