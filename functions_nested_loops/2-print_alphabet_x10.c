#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lower case 10 times,
 *  followed by new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char ch;

	while (count < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

		_putchar('\n');
		count++;
	}
}
