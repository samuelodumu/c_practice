#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - what happens if malloc is null
 *
 * Return: 0 on success, 1 otherwise
 */

int main(void)
{
	char *str;
	int i = 0;

	while (1)
	{
		str = malloc(INT_MAX);
		if (str == NULL)
		{
			printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);

			return (1);
		}

		str[0] = 'O';
		i++;
	}
	return (0);
}
