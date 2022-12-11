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
		if (!(chr == 'e' || chr == 'q')) 
		{
			putchar(chr);
		}

		chr++;
	}

	chr = '\n';
	putchar(chr);

	return (0);
}
