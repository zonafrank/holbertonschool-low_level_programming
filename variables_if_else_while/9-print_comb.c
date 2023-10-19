#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		if (digit < '9')
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}

	putchar('\n');
	return (0);
}
