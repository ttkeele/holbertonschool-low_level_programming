#include "holberton.h"

/**
 * _puts - prints a string to standout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
