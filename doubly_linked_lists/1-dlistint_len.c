#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the doubly linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
