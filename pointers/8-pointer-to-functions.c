#include <stdio.h>

void getSeconds(unsigned long *par);

int main()
{
	unsigned long sec;
	getSeconds (&sec);

	printf("Number of seconds: %lu\n", sec);
}

void getSeconds(unsigned long *par)
{
	*par = time(NULL);
	return;
}
