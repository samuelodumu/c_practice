#include <stdio.h>

int main() {
	int i;
	char myString[] = "Hello, world!";

		for (i = 0; i < 13; i++)
		{
			putchar(myString[i]);
		}
		putchar('\n');
	
	printf("%s\n", myString);

	return 0;
}
