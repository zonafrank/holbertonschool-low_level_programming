#include <stddef.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key to search for in the hash table.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	unsigned long int i;
	hash_node_t *node;

	i = index;
	node = ht->array[i];

	if (node == NULL)
		return (NULL);

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;

	if (node == NULL)
		return (NULL);

	return (node->value);
}
