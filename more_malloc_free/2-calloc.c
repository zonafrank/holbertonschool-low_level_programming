#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of each array element in bytes
 * Return: pointer to the first array element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memb;
	int i, msize;

	if (!size)
		return NULL;

	msize = nmemb * size;
	memb = malloc(msize);

	if (!memb)
		return (NULL);

	for (i = 0; i < msize; i++)
		((unsigned char *)memb)[i] = 0;
	return (memb);
}
