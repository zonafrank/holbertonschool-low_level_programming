#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * create_mem_alloc - gets memory allocation for a dlistint_t type
 * @n: value of the data member of the struct
 * Return: the first memory address or NULL if allocation fails
 */
dlistint_t *create_mem_alloc(int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

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

	if (head == NULL && idx > 0)
		return (NULL);
	new = create_mem_alloc(n);
	if (!new)
		return (NULL);
	if (head == NULL)
	{
		*h = new;
		return (new);
	}
	while (head != NULL && count < idx)
	{
		tmp = head;
		head = head->next;
		count++;
	}
	if (head == NULL)
	{
		if (count == idx)
		{
			head = tmp;
			tmp->next = new;
			new->prev = head;
			return (new);
		}
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
