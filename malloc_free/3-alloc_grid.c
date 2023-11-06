#include <stdlib.h>>

/**
 * alloc_grid - creates a 2 dimensional array of integers and
 * returns a pointer to the first memory location
 * @width: number of columns in the grid
 * @height: number of rows in the grid
 * Return: a pointer to the grid created or NULL if not possible
 */
int **alloc_grid(int width, int height)
{

	int **grid, i, j;

	if (!width || !height)
		return (NULL);

	if (width < 0 || height < 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int **)malloc(width * sizeof(int));
		if (!grid[i])
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
