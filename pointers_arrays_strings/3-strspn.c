#include "main.h"

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