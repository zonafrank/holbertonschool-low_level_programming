#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index in a
 * doubly linked list.
 *
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the node at the specified index was successfully deleted,
 *        -1 if the deletion failed or if the list is empty.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = *head;

	if (node == NULL)
		return -1;

	if (index == 0)
	{
		if (node->next == NULL && node->prev == NULL)
			*head = NULL;
		else
		{
			*head = node->next;
			(*head)->prev = NULL;
		}
		return 1;
	}

	while (node && i < index)
	{
		node = node->next;
		i++;
	}

	if (node == NULL)
		return -1;

	if (node->next == NULL)
	{
		node->prev->next = NULL;
		node->prev = NULL;
		free(node);
		return 1;
	}

	node->prev->next = node->next;
	node->next->prev = node->prev;
	node->prev = NULL;
	node->next = NULL;
	return 1;
}