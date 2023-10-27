#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: the matrix of integers for which diagonals are to be summed
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum_diag2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
