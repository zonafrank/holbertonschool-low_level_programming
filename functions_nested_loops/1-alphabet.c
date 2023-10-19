#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: void
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
