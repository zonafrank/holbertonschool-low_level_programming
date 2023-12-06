#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *curr_node;
	char *value_copy;
	unsigned long int index;
	/*unsigned long int i;*/

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	if ((value_copy = strdup(value)) == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/*for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}*/

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

	return 1;
}