#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: pointer to the string to be extended
 * @src: pointer to the string that will extend dest
 * @n: number of characters to append to dest from src
 *
 * Return: pointer to the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0;
	int srcIndex = 0;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	while (src[srcIndex] != '\0')
	{
		if (n == 0)
			break;

		dest[destLen + srcIndex] = src[srcIndex];
		if (srcIndex == (n - 1))
			break;
		srcIndex++;
	}

	return (dest);
}
