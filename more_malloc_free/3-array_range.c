#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value in the range and the starting value in the range
 * @max: maximum value in the range and last value in the range
 * Return: pointer to the first element of the range or NULLL
 * if min is greater than max
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
