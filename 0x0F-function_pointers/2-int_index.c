#include "function_pointers.h"
/**
 * int_index - task 2
 * @array: given array
 * @size: size of array
 * @cmp: given function
 *
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (size--)
	{
		if (cmp(*(array++)) != 0)
			return (i);
		i++;
	}
	return (-1);
}
