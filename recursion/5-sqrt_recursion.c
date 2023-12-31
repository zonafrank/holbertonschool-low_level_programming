#include "main.h"

/**
 * _sqrt_helper - helper function where recursive calls are made
 * to find the square root of the given number n
 * @low: the lower boundary value of range of number range for which
 * a middle value is to be selected
 * @high: the upper boundary value of the range of numbers for which
 * a middle value is to be selected
 * @n: the value for which a square root is to be found
 * Return: the square root of n, or -1 if n has no square root
 */
long int _sqrt_helper(long int low, long int high, long int n)
{
	if (n == 1)
		return (1);

	if (low <= high)
	{
		/* calculates middle value of the range low - high */
		long int mid = (low + high) / 2;
		/* check if the middle value squared is equalt to n */
		/* hence the square root */
		if (mid * mid == n)
		{
			return (mid);
		}
		/* if the square of mid is less than n and a square root */
		/* exists, it lies in the region above mid */
		else if (mid * mid < n)
		{
			return (_sqrt_helper(mid + 1, high, n));
		}
		/* if the square of mid is greater than n and a square root */
		/* exists, it lies in the region below mid */
		else
		{
			return (_sqrt_helper(low, mid - 1, n));
		}
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the value of x raised to the power of y
 * @n: the number for which the square root will be calculated
 *
 * Return: square root of n or -1 if no square root for n
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_sqrt_helper(1, n / 2, n));
}
