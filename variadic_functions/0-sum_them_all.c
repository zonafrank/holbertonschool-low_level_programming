#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - receives a variable number of parameters
 * and returns the sum of them
 * @n: The number of variable parameters passed to the function
 * @...: A variable number of parameters passed to the function
 * Return: 0 if n is 0, else the sum of the variable parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
	{
		va_end(ap);
		return (0);
	}

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
