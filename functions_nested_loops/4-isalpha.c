/**
 * _isalpha - checks for alphanumeric character
 * @c: character to check
 *
 * Return: 1 if argument is alphanumeric else returns 0
 */

int _isalpha(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
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
