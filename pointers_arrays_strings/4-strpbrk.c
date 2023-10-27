#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string literal to find substring in
 * @accept: pointer that contains characters to be found
 *
 * Return: the rest of 's' from the point at
 * which a match is found in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
			{
				return s;
			}

			j++;
		}

		s++;
	}

	return (void *)('\0');
}
