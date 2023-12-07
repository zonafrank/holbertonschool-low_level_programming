#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 *
 * @ht: A pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char n;

	if (!ht)
		return;

	printf("%c", '{');

	if (!(ht->size) || !ht->array)
		return;

	n = 0;
	for (i = 0; ht && i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			if (n)
				printf(", ");

			if (node->key && node->value)
			{
				printf("'%s': '%s'", node->key, node->value);
			}
			node = node->next;
			n = 1;
		}
	}

	printf("%c", '}');
	printf("\n");
}
