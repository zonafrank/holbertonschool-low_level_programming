void rev_string(char *s)
{
	int length = 0;
	int upper, lower;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;
	upper = length;
	lower = 0;

	while (upper > lower)
	{
		temp = s[lower];
		s[lower] = s[upper];
		s[upper] = temp;

		upper--;
		lower++;
	}
}