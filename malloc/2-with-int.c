#include <stdio.h>
#include <stdlib.h>

/**
 * add - adds three numbers
 *
 * @n0: first integer
 * @n1: second integer
 * @n2: third integer
 *
 * Return: 0
 */

int add(int n0, int n1, int n2)
{
	int *num, sum;

	num = malloc(sizeof(num) * 3);
	num[0] = n0;
	num[1] = n1;
	num[2] = n2;

	sum = num[0] + num[1] + num[2];

	printf("%d + %d + %d = %d\n", num[0], num[1], num[2], sum);

	return (0);
}

/**
 * main - calls the add function
 *
 * Return: 0
 */

int main(void)
{
	add(13, 24, 53);
	return (0);
}
