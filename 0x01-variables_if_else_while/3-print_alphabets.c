#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - the main function of the program
 * Return: an integr
 */

int main(void)
{
	char chr = 'a';

	while (chr <= 'z')
	{
		putchar(chr);
		chr++;
	}

	chr = 'A';

	while (chr <= 'Z')
	{
		putchar(chr);
		chr++;
	}
	
	chr = '\n';
	putchar(chr);

	return (0);
}
