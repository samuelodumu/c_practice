#include <stdio.h>
#include <stdlib.h>

void hello_user(char *name)
{
	printf("Hello, %s!\n", name);
}
void funcptr (void (*ptr)(char *), char *name)
{
	ptr(name);
}

int main(void)
{
	char *name;

	name = malloc(sizeof(char *) * 100);

	if (name == NULL)
	{
		printf("Memory allocation failed\n");
		return (EXIT_FAILURE);
	}

	printf("Enter your name: ");
	scanf("%s", name);

	funcptr(hello_user, name);
	free(name);
	return (0);
}
