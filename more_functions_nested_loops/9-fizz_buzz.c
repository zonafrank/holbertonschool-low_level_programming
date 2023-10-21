#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main()
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", "fizzbuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
