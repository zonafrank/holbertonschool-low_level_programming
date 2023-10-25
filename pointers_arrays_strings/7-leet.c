/**
 * leet -  encodes a string into 1337
 * @s: pointer to string to encode
 * Return: pointer to the string literal encoded
 */
char *leet(char *s)
{
	int index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == 'a' || s[index] == 'A')
		{
			s[index] = '4';
		}
		else if (s[index] == 'e' || s[index] == 'E')
		{
			s[index] = '3';
		}
		else if (s[index] == 'o' || s[index] == ')')
		{
			s[index] = '0';
		}
		else if (s[index] == 't' || s[index] == 'T')
		{
			s[index] = '7';
		}
		else if (s[index] == 'l' || s[index] == 'L')
		{
			s[index] = '1';
		}
		index++;
	}
	return s;
}
