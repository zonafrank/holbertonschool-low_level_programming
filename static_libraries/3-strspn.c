#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string literal to find substring in
 * @accept: pointer that contains characters to be found
 *
 * Return: the length of the shortest substring that
 * contains all the characters in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count, matchFound;
	char *acceptCopy;

	count = 0;

	while (*s)
	{
		acceptCopy = accept;
		matchFound = 0;
		while (*acceptCopy)
		{
			if (*s == *acceptCopy)
			{
				count++;
				matchFound = 1;
			}

			acceptCopy++;
		}

		if (matchFound == 0)
		{
			return (count);
		}

		s++;
	}

	return (0);
}
