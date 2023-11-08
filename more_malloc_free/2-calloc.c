#include <stdio.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of each array element in bytes
 * Return: pointer to the first array element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memb;

	if (!size)
		return NULL;

	memb = malloc(nmemb * size);

	if (!memb)
		return NULL;

	return memb;
}
