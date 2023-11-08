#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of characters from s2 to concatenate with s1
 * Return: pointer to the first character of the resultant string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size, s2_size, s_size, i, j;
	char *s;

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;

	for (s1_size = 0; s1[s1_size] != '\0'; s1_size++)
		;
	for (s2_size = 0; s2[s2_size] != '\0'; s2_size++)
		;
	s_size = (n >= s2_size) ? (s1_size + s2_size) : (s1_size + n);

	s = malloc((sizeof(char) * s_size) + 1);

	if (!s)
		return (NULL);

	i = j = 0;

	while (i < s1_size)
	{
		s[i] = s1[i];
		i++;
	}

	while (j < s2_size && j < n)
	{
		s[i + j] = s2[j];
		j++;
	}
	s[i + j] = '\0';

	return (s);
}
