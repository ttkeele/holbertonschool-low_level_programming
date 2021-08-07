#include "lists.h"
#include <string.h>

/**
 * add_node - adds node to beginning
 *            of a list_t list
 * @head: pointer to head of list_t list
 * @str: string to be aded to list_t list
 *
 * Return: if fails - NULL.
 *         otherwise - address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
