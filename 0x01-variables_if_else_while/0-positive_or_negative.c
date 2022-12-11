#include<stdio.h>
int main(void)
{
	int n;

	if (n == 0) {
		printf("%i is zero\n", n);
	} else if (n >= 0) {
		printf("%i is positive\n", n);
	} else {
		printf("%i is negative\n", n);
	}
	return (0);
}
