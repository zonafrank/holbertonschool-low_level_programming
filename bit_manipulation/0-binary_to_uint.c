#include <stddef.h>
#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @ch: pointer to a string literal
 * Return: length of the string of zero if ch is null
 */
unsigned int _strlen(const char *ch)
{
	unsigned int len = 0;

	if (ch == NULL)
		return (len);

	while (*ch != '\0')
	{
		len++;
		ch++;
	}

	return (len);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that is not 0 or 1,
 * or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int str_length, power;

	if (!b)
		return (res);

	str_length = _strlen(b);
	power = str_length - 1;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		res += ((*b - '0') * (1 << power));
		b++;
		power--;
	}

	return (res);
}
