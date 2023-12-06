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
	unsigned long int index, i;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	i = index;
	node = ht->array[i];

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;

	return (node == NULL) ? (NULL) : (node->value);
}
