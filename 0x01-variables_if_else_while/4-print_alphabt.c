#include <stdio.h>
/**
 * main - displays the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
	putchar('\n');
	return (0);
}
