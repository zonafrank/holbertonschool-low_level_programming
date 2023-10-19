/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if argument is alphabetic else returns 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
