#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: pointer to string literal to be duplicated
 * Return -  NULL if str is NULL or if memory cannot be allocated
 * else pointer to first memory address in memory space holding
 * the duplicate of str
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *dp;
	int len_str = 0;
	int i;

	for (len_str = 0; str[len_str]; len_str++)
		;

	dp = malloc(sizeof(char) * (len_str + 1));

	if (!dp)
		return NULL;

	i = 0;
	while (i < len_str)
	{
		dp[i] = str[i];
		i++;
	}
	dp[i] == '\0';
	return dp;
}
