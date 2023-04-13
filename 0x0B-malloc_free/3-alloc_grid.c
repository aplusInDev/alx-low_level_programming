#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - task 3
 * @width: arg1
 * @height: arg2
 *
 * Return: grid_alloc
 */
int **alloc_grid(int width, int height)
{
	int **grid_alloc, i, j;

	grid_alloc = malloc(sizeof(*grid_alloc) * height);
	if (width <= 0 || height <= 0 || grid_alloc == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid_alloc[i] = malloc(width * sizeof(**grid_alloc));
		if (grid_alloc[i] == NULL)
		{
			while (i--)
				free(grid_alloc[i]);
			free(grid_alloc);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid_alloc[i][j] = 0;
	}
	return (grid_alloc);
}
