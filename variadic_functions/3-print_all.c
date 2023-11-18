#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char type argument
 * @arg: pointer to first element of unknown number of arguments
 * Return: void
 */
void print_char(va_list arg)
{
	int ch;
	ch = va_arg(arg, int);
	printf("%c", ch);
}

/**
 * print_int - prints a int type argument
 * @arg: pointer to first element of unknown number of arguments
 * Return: void
 */
void print_int(va_list arg)
{
	int num;
	num = va_arg(arg, int);
	printf("%i", num);
}

/**
 * print_float - prints a float type argument
 * @arg: pointer to first element of unknown number of arguments
 * Return: void
 */
void print_float(va_list arg)
{
	double num;
	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a char * type argument
 * @arg: pointer to first element of unknown number of arguments
 * Return: void
 */
void print_string(va_list arg)
{
	char *s;
	s = va_arg(arg, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints any argument of type int, float, char and char *
 * @format: string literal for the character types
 * @...: an unknown number of arguments to print out
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list ap;
	int i, j;
	char *separator = "";

	printer_func_t funcs[] = {
	    {"c", print_char},
	    {"i", print_int},
	    {"f", print_float},
	    {"s", print_string},
	    {NULL, NULL}};

	va_start(ap, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;

		while (funcs[j].symbol && (*funcs[j].symbol != format[i]))
		{
			j++;
		}

		if (funcs[j].symbol)
		{
			printf("%s", separator);
			funcs[j].printer(ap);
			separator = ", ";
		}
		i++;
	}

	va_end(ap);
	printf("\n");
}
