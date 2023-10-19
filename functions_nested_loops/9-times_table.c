#include <stdio.h>
#include "main.h"

/**
 * times_table - prints out the multiplication table from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int product = i * j;
			if (product > 9)
			{
				_putchar('0' + (product / 10));
			}
			_putchar('0' + (product % 10));

			if (j < 9)
			{
				_putchar(',');
				_putchar('\t');
			}
		}
		printf("\n");
	}
}
