#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - the main function of the program
 * Return: an integr
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		num++;
	}

	printf("\n");

	return (0);
}
