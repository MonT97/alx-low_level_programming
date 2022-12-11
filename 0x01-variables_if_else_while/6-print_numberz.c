#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - the main function of the program
 * Return: an integr
 */

int main(void)
{
	
	char num;

	for (num = '1'; num <= '9'; num++)
	{
		putchar(num);
	}

	num = '\n';
	putchar(num);

	return (0);

}
