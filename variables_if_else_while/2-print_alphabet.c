#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}