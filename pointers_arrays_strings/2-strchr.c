#include <stddef.h>
#include "main.h"

/**
 * _strchr -  locates the first occurence of a character in a string.
 * @s: memmory address of the first character of the string to search in
 * @c: character to search for
 *
 * Return: memory address of first occurence of character `c` or NULL
 */
char *_strchr(char *s, char c)
{
	int pos = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}

		s++;
		pos++;
	}

	return (NULL);
}
