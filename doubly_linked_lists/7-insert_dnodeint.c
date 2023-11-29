#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h;
	dlistint_t *new;
	unsigned int count = 0;

	if (head == NULL)
		return NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return NULL;

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = head;
		head->prev = new;
		return new;
	}
	else
	{
		while (head && count != idx)
		{
			head = head->next;
			count++;
		}

		if (head == NULL)
		{
			return NULL;
		}

		if (head->next == NULL)
		{
			head->next = new;
			new->prev = head;
			return new;
		}
		else
		{
			new->next = head;
			new->prev = head->prev;
			head->prev = new;
			new->prev->next = new;
			return new;
		}
	}

	return (NULL);
}