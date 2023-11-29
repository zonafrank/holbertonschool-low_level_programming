#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * doubly linked list.
 *
 * @h: A pointer to the pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly inserted node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *node = *h;
	dlistint_t *new;

	while (node)
	{
		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
			{
				printf("Memory allocation failed\n");
				return (NULL);
			}

			new->n = n;
			new->next = node;
			new->prev = node->prev;
			(node->prev)->next = new;
			node->prev = new;

			return (new);
		}
		node = node->next;
		count++;
	}

	return (NULL);
}
