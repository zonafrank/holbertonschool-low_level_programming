#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t linked list
 * @head: pointer to pointer to the first memory addres of the linked list
 * @str: pointer to the first address of the string to be added to the list
 * Return: pointer to first address of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lptr = *head;
	list_t *new;
	char *str_dup;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (lptr);
	}

	str_dup = strdup(str);

	if (str_dup == NULL)
	{
		printf("Error\n");
		free(new);
		return (lptr);
	}

	new->str = str_dup;
	new->len = strlen(str);
	new->next = NULL;

	if (lptr == NULL)
	{
		*head = new;
	}
	else
	{
		while (lptr->next)
			lptr = lptr->next;

		lptr->next = new;
	}
	return (*head);
}
