#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set- function that adds an element to the hash table
 * @ht: pointer to hash table
 * @key: the key
 * @value: value associated with key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *el = NULL, *previous, *tmp;
	unsigned long int idx; /* el is element; previous is previous head */

	idx = 0;

	if (key == NULL || value == NULL || ht == NULL)
		return (0); /* condition */

	if (key[0] == '\0')
		return (0); /* key cannot be an empty srting */

	el = malloc(sizeof(hash_node_t));
	if (el == NULL)
		return (0); /* condition */

	el->key = strdup(key);
	el->value = strdup(value);
	el->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		ht->array[idx] = el;
	else
	{
		previous = ht->array[idx];
		for (tmp = previous; tmp != NULL; tmp = tmp->next)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				free(el->value);
				free(el);
				return (1);
			}
		}
		el->next = previous;
		ht->array[idx] = el;
	}
	return (1);
}
