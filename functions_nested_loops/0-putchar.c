#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char output[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(output[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
