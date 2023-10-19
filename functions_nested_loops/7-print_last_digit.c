#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - given a number it prints and returns the last digit
 * @num: integer for which to find the last digit
 *
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int lastDigit = abs(num % 10);

	_putchar('0' + lastDigit);
	return (lastDigit);
}
