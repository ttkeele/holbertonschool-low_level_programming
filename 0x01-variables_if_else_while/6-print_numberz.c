#include <stdio.h>

/**
 * main - dislpays all single digit numbers of base 10 starting from 0,
 *        using putchar and without char variables.
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	putchar('\n');

	return (0);
}
