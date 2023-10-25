/**
 * leet -  encodes a string into 1337
 * @s: pointer to string to encode
 * Return: pointer to the string literal encoded
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char targets[] = {'A', 'E', 'O', 'T', 'L'};
	char replacements[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == targets[j] || s[i] == targets[j] + 32)
			{
				s[i] = replacements[j];
			}
		}
		i++;
	}
	return s;
}
