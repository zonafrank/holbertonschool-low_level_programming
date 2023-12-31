#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
#include <stdio.h>
int main(void)
{
	int i, numFibs;
	unsigned long int Fibonacci[numFibs];

	printf("How many Fibonacci numbers do you want (between 1 and 75)? ");
	scanf("%i", &numFibs);
	if (numFibs < 1 || numFibs > 75)
	{
		printf("Bad number, sorry!\n");
		return 1;
	};
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;
	for (i = 2; i < numFibs; ++i)
		Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
	for (i = 0; i < numFibs; ++i)
		printf("%lu ", Fibonacci[i]);
	printf("\n");
	return 0;
}