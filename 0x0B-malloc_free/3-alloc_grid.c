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
	int **grid_alloc;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid_alloc = malloc(height * sizeof(int *));
	if (grid_alloc == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid_alloc[i] = malloc(width * sizeof(int **));
		if (grid_alloc[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid_alloc[j]);
			free(grid_alloc);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid_alloc[i][j] = 0;
	}
	return (grid_alloc);
}
