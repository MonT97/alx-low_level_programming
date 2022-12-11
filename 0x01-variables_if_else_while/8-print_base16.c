#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - the main function of the program
 * Return: an integr
 */

int main(void)
{

	char chr;

	for (chr = '0'; chr <= '9'; chr++)
	{
		putchar(chr);
	}

	for (chr = 'a'; chr <= 'f'; chr++)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);

}
