#include <stdio.h>
/**
 * main - displays the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{

	char ch = 'a';
	char CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
			putchar('\n');

	return (0);
}
