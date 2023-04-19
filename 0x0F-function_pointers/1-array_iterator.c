#include "function_pointers.h"
/**
 * array_iterator - task 1
 * @array: given array
 * @size: size of array
 * @action: given function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size--)
	{
		action(*(array++));
	}
}
