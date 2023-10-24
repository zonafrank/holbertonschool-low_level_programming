#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer to string literal
 *
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;
	char ch;

	// do
	// {
	// 	ch = str[count];
	// 	if (ch == '\0')
	// 		_putchar('\n');
	// 	else
	// 		_putchar(ch);
	// 	count++;
	// } while (ch != '\0');

	while (1)
	{
		ch = str[count];
		if (ch == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(ch);
		}
		count++;
	}
}
