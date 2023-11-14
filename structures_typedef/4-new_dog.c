#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog with the provided information
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 * Return: a pointer to the newly created dog (dog_t).
 * 	returns NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_ptr;
	char *name_cp;
	char *owner_cp;

	if (name == NULL || owner == NULL)
		return NULL;

	d_ptr = malloc(sizeof(dog_t));

	if (d_ptr == NULL)
	{
		free(d_ptr->name);
		free(d_ptr->owner);
		free(d_ptr);
		return NULL;
	}

	name_cp = strdup(name);
	owner_cp = strdup(owner);
	if (name_cp == NULL || owner_cp == NULL)
	{
		free(d_ptr->name);
		free(d_ptr->owner);
		free(d_ptr);
		return NULL;
	}

	d_ptr->name = name_cp;
	d_ptr->owner = owner_cp;
	d_ptr->age = age;

	return d_ptr;
}
