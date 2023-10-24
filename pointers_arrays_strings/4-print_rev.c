#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to string literal to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	char ch;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	while (length >= 0)
	{
		ch = s[length];
		_putchar(ch);
		if (length == 0)
		{
			_putchar('\n');
		}
		length--;
	}
}
