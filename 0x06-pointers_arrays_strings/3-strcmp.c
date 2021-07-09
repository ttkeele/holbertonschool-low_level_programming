#include "holberton.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 *
 * Return: if str1 < str2, the neg difference of the first unmatched characters
 *         if str1 == str2, 0
 *         if str1 > str2, the pos difference of the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
