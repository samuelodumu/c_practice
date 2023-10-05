#include <stdio.h>
#include <string.h> // Must be included for working with string functions

int main(void)
{
	char myString1[20] = "Hello, ";
	char myString1Copy[] = "Hello, ";
	char myString2[] = "World!";
	char random[] = "C is fun!";
	char result[50];

	printf("%s\n", strcat(myString1, myString2));
	printf("The lenght of myString1 is %ld\n", strlen(myString1));
	printf("The size of myString1 is %lu\n", sizeof(myString1));
	printf("The copy of random[] is %s\n", strcpy(result, random));
	printf("%d\n", strcmp(myString1, myString1Copy));
	printf("%d\n", strcmp(myString1, myString2));

	return (0);
}	
