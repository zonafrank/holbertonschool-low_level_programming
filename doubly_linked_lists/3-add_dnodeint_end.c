#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 *
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		printf("malloc allocation failed!\n");
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (h)
	{
		while (h->next)
		{
			h = h->next;
		}

		h->next = new;
	}
	else
	{
		*head = new;
	}
	return (*head);
}