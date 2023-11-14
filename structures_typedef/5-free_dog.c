#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Release memory allocated to a dog structure
 * and its components
 * @d: a pointer to the dog structure to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
