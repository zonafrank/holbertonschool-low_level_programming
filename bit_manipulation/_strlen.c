#include <stddef.h>
/**
 * _strlen - calculates the length of a string
 * @ch: pointer to a string literal
 * Return: length of the string of zero if ch is null
 */
unsigned int _strlen(char *ch)
{
	unsigned int len = 0;
	if (ch == NULL)
		return len;

	while (*ch != '\0')
	{
		len++;
		ch++;
	}

	return len;
}