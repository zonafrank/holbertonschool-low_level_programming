#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to the string to be extended
 * @src: pointer to the string that will extend dest
 *
 * Return: pointer to the dest
 */
char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcIndex = 0;

	while (dest[destLen] != '\0')
	{
		destLen++;
	}

	while (src[srcIndex] != '\0')
	{
		dest[destLen + srcIndex] = src[srcIndex];
		srcIndex++;
	}

	return (dest);
}
