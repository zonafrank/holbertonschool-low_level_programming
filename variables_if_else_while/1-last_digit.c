#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * printMsg - Print a string character by character.
 * @ch: The input string to print
 *
 * This function prints each character in the input string 'ch' to the
 * standard output.
 *
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

/**
 * intToString - convert an integer to a string
 *@num: integer to be converted to a string
 * Return: string
 */
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

	return (str);
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
		printMsg("less than 6 and not 0");

	else
		printMsg("greater than 5");

	putchar('\n');
	return (0);
}
