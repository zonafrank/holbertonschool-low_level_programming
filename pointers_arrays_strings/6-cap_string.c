/**
 * cap_string - function that changes all letters
 *  of a string to uppercase.
 * @s: string to transform
 * Return: pointer to the string literal
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' || s[i - 1] == '.')
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}