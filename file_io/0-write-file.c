#include <stdio.h>

int main(void)
{
	 FILE *fp;
	 fp = fopen("name.txt", "w");

	 fprintf(fp, "%s", "Hello, World");
	 
	 fclose(fp);
	 return (0);
}
