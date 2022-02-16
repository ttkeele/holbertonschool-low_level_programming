#include "hash_tables.h"

/**
 * hash_table_create- a function that creates a hash table
 * @size: size of the array
 *
 * Return:  a pointer to the newly created hash table
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashy;
	unsigned long int i;

	i = 0;

	hashy = malloc(sizeof(hash_table_t));
	if (hashy == NULL)
		return (NULL);

	hashy->size = size;

	hashy->array = malloc(sizeof(hash_node_t *) * size);
	if (hashy->array == NULL)
		return (NULL);

	for (; i < size; i++)
		hashy->array[i] = NULL;

	return (hashy);
}
