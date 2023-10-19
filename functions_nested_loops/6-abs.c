/**
 * _abs - computes the absolute value of an integer
 * @n: number to check
 *
 * Return: positive value number if less than zero else return number
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
