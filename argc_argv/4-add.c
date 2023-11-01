#include <stdio.h>

/**
 * _isdigit - checks if a string literal can be converted to a valid integer
 * @s: pointer to char type representing a string literal
 * Return: 1 if s represents a valid integer, else 0
 */
int _isdigit(char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			s++;

		else
			return (0);
	}
	return (1);
}

/**
 * chartoint - helper function for converting
 * literal string of digits to an integer
 * @ch: pointer to char type representing literal string
 * Return: integer equivalent of ch
 */
int chartoint(char *ch)
{
	int result = 0;
	int sign = 1;

	while (*ch != '\0')
	{
		if (*ch == '-')
		{
			sign = -1;
		}
		else
		{
			result = (result * 10) + (*ch - '0');
		}
		ch++;
	}

	return (result * sign);
}

/**
 * main - entry point to the program
 * The program adds up unlimited number of arguments passed
 * through the command line and prints out the sum
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to char representing arguments
 * passed to the program
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, isValid;
	int sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *token = argv[i];

			isValid = _isdigit(token);

			if (!isValid)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += chartoint(token);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
