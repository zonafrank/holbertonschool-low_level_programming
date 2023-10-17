#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * printMsgPart1 - prints first part of the message
 * Return: Always 0 (success)
 */
int printMsgPart1(void)
{
	putchar('L');
	putchar('a');
	putchar('s');
	putchar('t');
	putchar(' ');
	putchar('d');
	putchar('i');
	putchar('g');
	putchar('i');
	putchar('t');
	putchar(' ');
	putchar('o');
	putchar('f');
	putchar(' ');
	return (0);
}

/**
 * printMsgPart3 - prints third part of the message
 * Return: Always 0 (success)
 */
int printMsgPart3(void)
{
	putchar('l');
	putchar('e');
	putchar('s');
	putchar('s');
	putchar(' ');
	putchar('t');
	putchar('h');
	putchar('a');
	putchar('n');
	putchar(' ');
	putchar('6');
	putchar(' ');
	putchar('a');
	putchar('n');
	putchar('d');
	putchar(' ');
	putchar('n');
	putchar('o');
	putchar('t');
	putchar(' ');
	putchar('0');
	return (0);
}

/**
 * printMsgPart4 - prints fourth part of the message
 * Return: Always 0 (success)
 */
int printMsgPart4(void)
{
	putchar('g');
	putchar('r');
	putchar('e');
	putchar('a');
	putchar('t');
	putchar('e');
	putchar('r');
	putchar(' ');
	putchar('t');
	putchar('h');
	putchar('a');
	putchar('n');
	putchar(' ');
	putchar('5');
	return (0);
}

/**
 * printMsgPart2 - prints second part of the message
 * Return: Always 0 (success)
 */
int printMsgPart2(int lastDigit)
{
	putchar('0' + abs(lastDigit));
	putchar(' ');
	putchar('a');
	putchar('n');
	putchar('d');
	putchar(' ');
	putchar('i');
	putchar('s');
	putchar(' ');
	return (0);
}

/**
 *main - entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int val;
	int lastDigit;
	int nSign;
	int reverse;
	int remainder;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nSign = n / abs(n);

	printMsgPart1();

	/* print the random number*/
	val = n;
	reverse = 0;

	while (val != 0)
	{
		remainder = val % 10;
		reverse = reverse * 10 + remainder;
		val /= 10;
	}

	val = abs(reverse);

	if (nSign == -1)
		putchar('-');

	if (val == 0)
	{
		putchar('0');
	}
	else
	{
		while (val != 0)
		{
			digit = val % 10;
			putchar('0' + digit);
			val /= 10;
		}

		if (n % 10 == 0)
			putchar('0');
	}

	putchar(' ');
	putchar('i');
	putchar('s');
	putchar(' ');

	lastDigit = n % 10;

	if (lastDigit < 0)
		putchar('-');

	printMsgPart2(lastDigit);

	if (lastDigit == 0)
		putchar('0');
	else if (lastDigit < 6)
		printMsgPart3();

	else
		printMsgPart4();

	putchar('\n');
	return (0);
}
