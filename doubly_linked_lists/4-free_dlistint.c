#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list -  frees a list_t list
 * @head: pointer to list_t list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
