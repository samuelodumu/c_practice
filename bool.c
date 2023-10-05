#include <stdio.h>

int main(void)
{
	int myAge = 15;
	int votingAge = 18;

	if (myAge >= votingAge)
	{
		printf("%d is old enough to vote!\n", myAge);
	}
	else 
	{
		printf("%d is not old enough to vote.\n", myAge);
	}

	return (0);
}
