#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - the main function of the program
 * Return: the default int of the main function
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lst_digit = n % 10;

	if (lst_digit == 0)
	{
		printf("Last digit of %i is %d and is 0\n",n , lst_digit);
	}
	else if (lst_digit > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n",n , lst_digit);
	}
	else if (lst_digit < 6 && lst_digit != 0)
	{
		printf("Last digit of %i is %d and is less than 6 and not 0\n",n , lst_digit);
	}

	return (0);
}
