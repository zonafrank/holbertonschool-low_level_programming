#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string to print out from
 *
 * Return: void
 */
void puts2(char *str)
{
	int count = 0;

	char ch = str[count];

	while (ch != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}

		count++;
		ch = str[count];
	}
}
