#include "main.h"

/**
 * _sqrt_helper - helper function where recursive calls are made
 * 	to find the square root of the given number n
 * @low: the lower boundary value of range of number range for which
 * a middle value is to be selected
 * @high: the upper boundary value of the range of numbers for which
 * a middle value is to be selected
 * @n: the value for which a square root is to be found
 */
int _sqrt_helper(int low, int high, int n)
{
	if (n == 1)
		return 1;

	if (low <= high)
	{
		/* calculates middle value of the range low - high */
		int mid = (low + high) / 2;
		/* check if the middle value squared is equalt to n */
		/* hence the square root */
		if (mid * mid == n)
		{
			return mid;
		}
		/* if the square of mid is less than n and a square root */
		/* exists, it lies in the region above mid */
		else if (mid * mid < n)
		{
			return _sqrt_helper(mid + 1, high, n);
		}
		/* if the square of mid is greater than n and a square root */
		/* exists, it lies in the region below mid */
		else
		{
			return _sqrt_helper(low, mid - 1, n);
		}
	}
	return -1;
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the value to be raised to power y
 * @y: the power that x will be raised to
 *
 * Return: integer, value of x raised to the power of y
 */
int _sqrt_recursion(int n)
{
	return _sqrt_helper(1, n / 2, n);
}
