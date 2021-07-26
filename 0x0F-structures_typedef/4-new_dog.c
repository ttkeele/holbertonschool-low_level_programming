#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: string to be measured
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest
 * @dest: buffer storing the string copy
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bobba;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bobba = malloc(sizeof(dog_t));
	if (bobba == NULL)
		return (NULL);

	bobba->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bobba->name == NULL)
	{
		free(bobba);
		return (NULL);
	}

	bobba->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bobba->owner == NULL)
	{
		free(bobba->name);
		free(bobba);
		return (NULL);
	}

	bobba->name = _strcopy(bobba->name, name);
	bobba->age = age;
	bobba->owner = _strcopy(bobba->owner, owner);

	return (bobba);
}
