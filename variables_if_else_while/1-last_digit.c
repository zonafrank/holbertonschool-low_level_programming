#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * printMsg - prints a string to the console
 * Return: Always 0 (success)
 */
int printMsg(char *ch)
{
	while (*ch != '\0')
	{
		putchar(*ch);
		ch++;
	}
	return (0);
}

char *intToString(int num)
{
	int length = snprintf(NULL, 0, "%d", num);
	char *str = (char *)malloc(length + 1);
	/* Check if memory allocation was successful */
	if (str != NULL)
	{
		/* Use snprintf to convert the integer to a string */
		snprintf(str, length + 1, "%d", num);
	}

	return str;
}

/**
 *main - entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printMsg("Last digit of ");
	printMsg(intToString(n));

	/* placeholder for deleted lines of code*/

	printMsg(" is ");

	lastDigit = n % 10;

	if (lastDigit < 0)
		putchar('-');

	putchar('0' + abs(lastDigit));
	printMsg(" and is ");

	if (lastDigit == 0)
		putchar('0');
	else if (lastDigit < 6)
		printMsg("and is less than 6 and not 0");

	else
		printMsg("and is greater than 5");

	putchar('\n');
	return (0);
}
