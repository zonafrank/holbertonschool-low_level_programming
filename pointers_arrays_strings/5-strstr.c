char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int matchFound = 0;
	int startIndex = -1;
	k = 0;

	for (i = 0; needle[i]; i++)
	{
		for (j = k; haystack[j]; j++)
		{
			if (needle[i] == haystack[j])
			{
				if (matchFound == 0)
				{
					startIndex = j;
				}
				matchFound = 1;
				k = j + 1;
				break;
			}
			else
			{
				matchFound = 0;
				startIndex = -1;
			}
		}
	}

	if (matchFound && startIndex >= 0)
	{
		return (haystack + startIndex);
	}
	else
	{
		return '\0';
	}
}
