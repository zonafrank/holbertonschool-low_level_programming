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
	dlistint_t *node, *next_node, *prev_node;
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
		free(node);
		return 1;
	}
	while (node && (i++) < index)
		node = node->next;
	if (node == NULL)
		return -1;
	prev_node = node->prev;
	next_node = node->next;
	if (next_node == NULL)
		prev_node->next = NULL;
	else
	{
		prev_node->next = next_node;
		next_node->prev = prev_node;
	}

	free(node);
	return 1;
}