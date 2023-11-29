#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list
 * @head: pointer to dlistint_t list
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
