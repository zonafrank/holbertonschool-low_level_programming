#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the start of memory addresses to fill
 * @b: char value to fill the memory addresses with
 * @n: number of memory addresses to fill
 *
 * Return: pointer to the first address of addresses filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*p = b;
		p++;
	}

	return s;
}
