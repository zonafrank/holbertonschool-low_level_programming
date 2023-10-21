/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @ch: input to check for
 * Return: 1 if ch is a digit else 0
 */

int _isdigit(char ch)
{
	int result = 0;

	if (ch >= 48 && ch <= 57)
	{
		result = 1;
	}
	return (result);
}
