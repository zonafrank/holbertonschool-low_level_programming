/**
 * _abs - computes the absolute value of an integer
 * @n: number to check
 *
 * Return: 1 if n > 0, -1 if n < 0, 0 if n == 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
