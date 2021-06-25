#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - display if a randfom numver is positive or negative
 *
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	if (n % 10 < 6 && n % 10 > 0)
	{
		printf("%d is less than 6 but and not 0\n", n);
	}
	if (n % 10 == 0)
	{
		printf("%d and is zero\n", n);
	}
	return (0);
}
