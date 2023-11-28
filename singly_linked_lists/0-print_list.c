#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t linked list
 * @h: pointer to the linked list
 * Return: 0 if h is null, else the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		len++;
		h = h->next;
	}

	return (len);
}
