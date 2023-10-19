#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
