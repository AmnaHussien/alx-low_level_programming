#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of array
 * Return: pointer to the newly created hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;

	if (!size)
		return (NULL);

	h = calloc(1, sizeof(hash_table_t));
	if (!h)
		return (NULL);
	h->size = size;
	h->array = calloc(size, sizeof(hash_node_t *));
	if (!h->array)
	{
		free(h);
		return (NULL);
	}

	return (h);
}
