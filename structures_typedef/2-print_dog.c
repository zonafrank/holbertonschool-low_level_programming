#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s", (d->name != NULL) ? d->name : "(nil)");
		printf("Name: %.2f", d->age);
		printf("Name: %s", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
