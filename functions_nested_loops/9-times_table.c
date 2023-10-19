#include <stdio.h>
#include "main.h"

/**
 * times_table - prints out the multiplication table from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
				}
			}

			if (product > 9)
			{
				_putchar('0' + (product / 10));
			}

			_putchar('0' + (product % 10));
		}
		_putchar('\n');
	}
}
