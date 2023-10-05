#include <stdio.h>
// var = (condition) ? expressionTrue : expressionFalse;

int main(void)
{
	int age = 18;

	//if-else statement
	if (age < 25)
	{
		printf("You are not allowed here\n");
	}
	else
	{
		printf("Welcome");
	}

	//ternary operator
	age = 27;

	(age < 25) ? printf("You are not allowed here\n") : printf("Welcome\n");
	return (0);
}
