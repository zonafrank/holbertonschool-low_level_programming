#include <stdio.h>
#include <stdlib.h>
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
	if (name == NULL || owner == NULL)
		return NULL;

	d_ptr = malloc(sizeof(dog_t));

	if (d_ptr == NULL)
		return NULL;

	(*d_ptr).name = name;
	(*d_ptr).age = age;
	(*d_ptr).owner = owner;

	return d_ptr;
}
