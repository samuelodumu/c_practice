#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char ch[100];
	
	fp = fopen("name.txt", "r");
	printf("%s", fgets(ch, 50, fp));
	
	fclose(fp);
	return (0);
}
