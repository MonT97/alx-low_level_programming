#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - the main function of the program
 * Return: an integr
 */

int main(void)
{

	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar((char)num);
	}

	putchar('\n');

	return (0);

}
