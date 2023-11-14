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
 * returns NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(name));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = strdup(name);
	d->owner = strdup(owner);
	d->age = age;

	return (d);
}
