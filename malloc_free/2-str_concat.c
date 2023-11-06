#include <stdlib.h>

/**
 * getlength - calculates the length of a string
 * @str: string literal for which length is to be calculated
 * Return: length of str
 */
int getlength(char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string literal
 * @s2: second string literal
 * Return: pointer to memory location that holds
 * the concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	size_t i;
	size_t s1_length;
	size_t s2_length;

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;
	s1_length = getlength(s1);
	s2_length = getlength(s2);

	s = malloc(s1_length + s2_length + 1);
	if (!s)
		return (NULL);

	i = 0;
	while (i < s1_length)
	{
		s[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < s2_length)
	{
		s[s1_length + i] = s2[i];
		i++;
	}
	s[s1_length + s2_length] = '\0';
	return (s);
}
