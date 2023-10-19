#include "main.h"
/**
 * print_last_digit: given a number it prints and returns the last digit
 * @num: integer for which to find the last digit
 * Returns: value of the last digit
 */

int print_last_digit(int num)
{
	int absNum = num < 0 ? num * -1 : num;
	int lastDigit = absNum % 10;
	_putchar(lastDigit);
	return (lastDigit);
}
