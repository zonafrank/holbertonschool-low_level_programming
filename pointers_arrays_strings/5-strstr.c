#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: pointer to string literal to find needle in
 * @needle: pointer to string literal to find in haystack
 *
 * Return: pointer to position where needle is found or
 * Null if needle is not found in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			for (i = 0; haystack[i] == needle[i]; i++)
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
			}
		}

		haystack++;
	}

	return ('\0');
}
