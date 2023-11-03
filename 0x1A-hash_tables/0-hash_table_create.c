#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_new = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	hash_table_new = malloc(sizeof(hash_table_t));
	if (!hash_table_new)
	{
		return (NULL);
	}

	hash_table_new->size = size;
	hash_table_new->array = calloc((size_t)size, sizeof(hash_node_t *));

	if (hash_table_new->array == NULL)
		return NULL;

	return (hash_table_new);
}
