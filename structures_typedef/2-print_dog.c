#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a dog
 * @d: Pointer to the struct dog containing the dog's information
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
