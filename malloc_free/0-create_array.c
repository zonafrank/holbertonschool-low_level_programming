#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 *  a specific char
 * @size: size of the array
 * @c: character to fill the array with
 * Return: NULL if array could not be created, else pointer to the
 * first array element
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	buffer[i] = '\0';
	return (buffer);
}
