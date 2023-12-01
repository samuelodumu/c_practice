#include <stdio.h>
#include <stdlib.h>

/**
 * main - intro to malloc
 *
 * Return: pointer to int
 */

int main(void)
{
	char *str;

	str = malloc(sizeof(char) * 3);
	str[0] = 'O';
	str[1] = 'K';
	str[2] = '\0';

	printf("%s\n", str);
	
	free(str);
	return (0);
}
