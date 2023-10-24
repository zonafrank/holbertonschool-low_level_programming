#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: pointer to array to be printed from
 * @n: number of values to print from the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
