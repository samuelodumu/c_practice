#include <stdio.h>

int main(void)
{
	int i, n = 4;
	char arr[] = {'a', 'j', 's', 'p'};
	char item = 'p';

	for (i = 0; i < n; i++)
	{
		if (arr[i] == item)
		{
			printf("Found character %c at index %d\n", item, i);
		}
		if (i == n - 1 && arr[i] != item)
		{
			printf("Could not find character %c in array\n", item);
		}
	}
	return (0);
}
