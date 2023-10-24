void rev_string(char *s)
{
	int length = 0;
	char ch;
	char a, b, temp;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;
	int upper = length;
	int lower = 0;

	while (upper > lower)
	{
		temp = s[lower];
		s[lower] = s[upper];
		s[upper] = temp;

		upper--;
		lower++;
	}
}