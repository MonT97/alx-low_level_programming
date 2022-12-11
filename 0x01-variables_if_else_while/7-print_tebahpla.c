#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - the main function of the program
 * Return: an integr
 */

int main(void)
{

	char chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);

}
