/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if argument is lowercase else returns 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
