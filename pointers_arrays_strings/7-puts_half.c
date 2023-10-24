#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string to print from
 *
 * Return: void
 */

void puts_half(char *str)
{
	int strLength = strlen(str);
	int strIsEven = strLength % 2 == 0 ? 1 : 0;
	int counter, charsToPrint;

	if (strIsEven)
	{
		counter = strLength / 2;
	}
	else
	{
		charsToPrint = (strLength - 1) / 2;
		counter = strLength - charsToPrint;
	}

	while (str[counter] != '\0')
	{
		putchar(str[counter]);
		counter++;
	}
	putchar('\n');
}
