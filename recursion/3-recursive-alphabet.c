#include <stdio.h>
#include <unistd.h>

void print_alphabets_starting_from(char c)
{
	if (c == 'z')
	{
		return;
	}
	putchar(c);
	print_alphabets_starting_from(c + 1);
}
void print_alphabet(void)
{
	print_alphabets_starting_from('q');
}
int main(void)
{
	print_alphabet();
	putchar('\n');
	
	return (0);
}
