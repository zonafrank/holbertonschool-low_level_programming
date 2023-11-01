#include <stdio.h>

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

	return result * sign;
}

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("Error");
	}
	else
	{
		char *op1 = argv[1];
		char *op2 = argv[2];

		int val1 = chartoint(op1);
		int val2 = chartoint(op2);

		printf("%d\n", val1 * val2);
	}
	return 0;
}