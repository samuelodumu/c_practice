#include <stdio.h>

void main(void)
{
	int myNumbers[4] = {25, 50, 75, 100};
	int i;
	
	for (i = 0; i < 4; i++)
	{
		printf("%p\n", &myNumbers[i]);
	}
}

