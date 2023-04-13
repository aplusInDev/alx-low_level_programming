#include "main.h"
#include <stdlib.h>
/**
 * free_grid - task 4
 * @grid: arg1
 * @height: arg2
 *
 * Return: grid_alloc
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
