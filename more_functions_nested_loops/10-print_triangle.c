/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < (size - i - 1))
			{
				putchar(' ');
			}
			else
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
}