#include "hash_tables.h"
#include <string.h>

/**
* hash_table_get - retrieves a value associated with a key.
* @ht: the hash table you want to look into.
* @key: the key you are looking for.
*
* Return: value associated with the element or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
