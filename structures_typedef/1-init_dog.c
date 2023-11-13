#include <stdio.h>
#include "dog.h"

/**
 * init_dog - creates an instance of the dog struct
 * @d: dog struct instance
 * @name: pointet to string: name to be assigned to the dog d
 * @age: float: age of the dog d
 * @owner: pointer to string: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
