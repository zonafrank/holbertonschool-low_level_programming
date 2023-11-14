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
	// Check for NULL input strings
	if (name == NULL || owner == NULL)
	{
		return NULL;
	}

	// Allocate memory for the new dog
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		return NULL; // Memory allocation failed
	}

	// Allocate memory for the name and owner strings
	new_dog_ptr->name = strdup(name);
	new_dog_ptr->owner = strdup(owner);

	// Check for strdup failures
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		// Free previously allocated memory if strdup fails
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return NULL;
	}

	// Set the age of the new dog
	new_dog_ptr->age = age;

	return new_dog_ptr;
}
