#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: number of bytes of memory to be allocated
 * Return: normal return with status 98 if allocation fails
 * else return the address of the first allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (!m)
	{
		exit(98);
	}

	return (m);
}
