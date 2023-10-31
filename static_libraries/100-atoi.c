/**
 * _atoi -  convert a string to an integer
 * @s: string from which to extract the integer
 *
 * Return: extracted number
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char ch;

	while (1)
	{
		ch = *s;
		if (ch == '\0')
		{
			break;
		}
		else
		{
			if (ch == '-')
			{
				sign *= -1;
			}
			else if (ch >= '0' && ch <= '9')
			{
				num = (num * 10) + (ch - '0');
			}
			else if (num > 0)
			{
				break;
			}
		}

		s++;
	}

	return (num * sign);
}
