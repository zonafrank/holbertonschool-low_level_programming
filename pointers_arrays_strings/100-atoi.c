/**
 * _atoi -  convert a string to an integer
 * @s: string from which to extract the integer
 *
 * Return: extracted number
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (1)
	{
		if (*s == '\0')
		{
			break;
		}
		else
		{
			if (*s == '-')
			{
				sign *= -1;
			}
			else if (*s >= '0' && *s <= '9')
			{
				num = (num * 10) + (*s - '0');
			}
			else if (num > 0)
			{
				break;
			}
		}

		*s++;
	}

	return (num * sign);
}
