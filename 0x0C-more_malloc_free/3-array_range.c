#include "main.h"
#include <stdlib.h>
/**
 * array_range - task 3
 * @min: first arg
 * @max: second arg
 *
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *range, i, j;

	if (min > max)
		return (NULL);
	range = malloc((max - min + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; i++, j++)
		range[i] = j;
	return (range);
}
