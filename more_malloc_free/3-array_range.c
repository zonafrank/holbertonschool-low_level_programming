#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
int *array_range(int min, int max)
{
	int *intrange, members, i;

	if (min > max)
		return (NULL);

	members = (max - min) + 1;

	intrange = malloc(members * (sizeof(int)));

	if (!intrange)
		return (NULL);

	for (i = 0; i <= members; i++)
		intrange[i] = min + i;

	return (intrange);
}
