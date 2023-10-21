#include "main.h"

/**
 * print_multi -  helper function for printing out multi digit integers
 * @value: integer value to be printed out
 * Return: void
 */
void print_multi(long value)
{
	if (value / 10)
		print_multi(value / 10);

	_putchar(value % 10 + '0');
}

/**
 *more_numbers -  prints 10 times the numbers, from 0 to 14
 *Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j <= 14; j++)
		{
			print_multi(j);
		}
		_putchar('\n');
	}
}
