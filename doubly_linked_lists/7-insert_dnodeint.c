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
	dlistint_t *head = *h, *new, *tmp;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!head && idx == 0)
	{
		*h = new;
		return (new);
	}

	while (head && count != idx)
	{
		tmp = head;
		head = head->next;
		count++;
	}

	if (head == NULL && idx == count + 1)
	{
		head = tmp;
		tmp->next = new;
		new->prev = head;
		return (new);
	}

	if (!head || count != idx)
	{
		free(new);
		return (NULL); /* Index out of bounds */
	}

	new->next = head;
	if (head->prev != NULL)
		head->prev->next = new;
	new->prev = head->prev;
	head->prev = new;

	if (new->prev == NULL)
		*h = new;

	return (new);
}
