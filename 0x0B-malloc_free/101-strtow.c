#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - Main Entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - Main Entry
 * @str: input
 * Return: 0
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int x, height, i, n, a;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (x = height = 0; str[x] != '\0'; x++)
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (i = a = 0; i < height; i++)
	{
		for (x = a; str[x] != '\0'; x++)
		{
			if (str[x] == ' ')
				a++;
			if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			{
				aout[i] = malloc((x - a + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (n = 0; a <= x; a++, n++)
			aout[i][n] = str[a];
		aout[i][n] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}
