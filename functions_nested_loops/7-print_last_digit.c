#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit: given a number it prints and returns the last digit
 * @num: integer for which to find the last digit
 * Returns: value of the last digit
 */

int print_last_digit(int num)
{
	printf("%d\n", num);
	int lastDigit = abs(num % 10);
	putchar('0' + lastDigit);
	return (lastDigit);
}
