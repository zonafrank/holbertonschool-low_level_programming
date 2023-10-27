char *_strstr(char *haystack, char *needle)
{
	int i;

	if (!*needle)
		return haystack;

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			for (i = 0; haystack[i] == needle[i]; i++)
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
			}
		}

		haystack++;
	}
}
