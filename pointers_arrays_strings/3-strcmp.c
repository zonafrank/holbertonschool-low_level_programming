/**
 * _strcmp - function that compares two strings
 * @s1: pointer for the first string
 * @s2: pointer for the second string
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	char s1Ch;
	char s2Ch;
	int diff = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1Ch = s1[i];
		s2Ch = s2[i];

		if (s1Ch != s2Ch)
		{
			diff = s1Ch - s2Ch;
			break;
		}
	}

	return (diff);
}
