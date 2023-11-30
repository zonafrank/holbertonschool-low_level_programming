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
	dlistint_t *head = *h;
	dlistint_t *new;
	unsigned int count = 0;

	if (head == NULL)
	{
		if (idx == 0)
		{
			new = malloc(sizeof(dlistint_t));
			if (new != NULL)
			{
				new->n = n;
				new->next = NULL;
				new->prev = NULL;
				*h = new;
				return (new);
			}
		}
		return (NULL);
	}

	while (head && count != idx)
	{
		head = head->next;
		count++;
	}

	if (head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	new->next = head;
	if (head->prev != NULL)
		head->prev->next = new;
	new->prev = head->prev;
	head->prev = new;

	if (new->prev == NULL)
		*h = new;

	return (new);
}