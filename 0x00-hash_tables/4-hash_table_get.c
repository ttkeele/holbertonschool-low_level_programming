#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get- function that retrieves a value associated with a key
 * @ht: pointer to hash table
 * @key: the key
 * Return: value associated with element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx; /* index */
	hash_node_t *el; /* element */

	if (ht == NULL)
		return (NULL); /* condition */

	idx = key_index((const unsigned char *)key, ht->size);

	for (el = ht->array[idx]; el != NULL; el = el->next)
	{
		if (strcmp(key, el->key) == 0)
			return (el->value);
	}

	return (NULL);
}
