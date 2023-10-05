#include <stdio.h>

/**
 * modify_char - Solve me
 *
 * Return: nothing.
 */

void modify_char(char *c, char cc)
{
	*c = 'S';
	cc = 'A';

	printf("The value of *c is: %c\n", *c);
	printf("The value of cc is: %c\n", cc);
	printf("The address of *c is: %p\n", &c);
	printf("The address of cc is: %p\n", &cc);
	putchar('\n');
}

int main(void)
{
	char d = 'M';
	char *p = &d;

	printf("The value of d before the call is: %c\n", d);
	printf("The address of d before the call is: %p\n", &d);
	printf("The value of p before the call is: %p\n", p);
	printf("The address of p before the call is: %p\n", &p);
	putchar('\n');
	modify_char(p, d);
	printf("The value of d after the call is: %c\n", d);
	printf("The address of d after the call is: %p\n", &d);
        printf("The value of p after the call is: %p\n", p);
        printf("The address of p after the call is: %p\n", &p);

	return (0);
}
