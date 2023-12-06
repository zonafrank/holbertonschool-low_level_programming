#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table.
 *
 * @ht: A pointer to the hash table.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *curr_node;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr_node = ht->array[index];
	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(curr_node->value);
			curr_node->value = value_copy;
			return (1);
		}
		curr_node = curr_node->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
