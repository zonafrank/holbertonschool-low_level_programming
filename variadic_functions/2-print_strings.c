#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, separated by an uptional
 * separator character.
 * @separator: the string to be printed between numbers
 * @n: the number of strings passed to the function
 * @...: a variable length of parameters representing n strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ch;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(ap, char *);
		if (ch == NULL)
			printf("(nil)");
		else
			printf("%s", ch);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
