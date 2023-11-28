#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	unsigned int len = 0;

	do
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
	} while ((h = h->next) != NULL);

	return len;
}
