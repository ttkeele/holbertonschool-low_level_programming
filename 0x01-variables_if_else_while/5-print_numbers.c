#include <stdio.h>

/**
 * main - displays all single digit numbers of base 10 starting from 0.
 *
 * Return: 0
 */
int main(void)
{
	int a = '0';

	for (a = 0; a < 10; a++)
		printf("%d", a);

	printf("\n");

	return (0);
}
