/**
 * printInt - helper function to print an integer with multiple digits
 * @num: integer to print to standard output
 * Return: void
 */
void printInt(num)
{
	if (num < 0)
	{
		putchar('-');
		num = -num;
	}

	if (num / 10)
	{
		printInt(num / 10);
	}

	putchar(num % 10 + '0');
}

/**
 * print_to_98 -  prints all natural numbers from n to 98, followed by a new line
 * @n: integer to start from
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printInt(n);
			if (n > 98)
			{
				putchar(',');
				putchar(' ');
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printInt(n);
			if (n < 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
	}
	else
	{
		printInt(n);
	}
}