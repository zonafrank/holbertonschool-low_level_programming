#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string literal
 *
 * Return: length of the string literal
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
