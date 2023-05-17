#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int n, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		grid[n] = malloc(sizeof(int) * width);

		if (grid[n] == NULL)
		{
			for (n = 0; n >= 0; n--)
				free(grid[n]);

			free(grid);
			return (NULL);
		}
	}

	for (n = 0; n < height; n++)
	{
		for (i = 0; i < width; i++)
			grid[n][i] = 0;
	}

	return (grid);
}
