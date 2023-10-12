#include "search_algos.h"

/**
 * interpolation_search - This function searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: This function returns the first index where value is located
 * If value is not present in array or if array is NULL, your function must
 * return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (interpolation_helper(array, 0, size - 1, value));
}

/**
 * interpolation_helper - This function searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @min: min
 * @max: max
 * @value: is the value to search for
 * Return: This function returns the first index where value is located
 * If value is not present in array or if array is NULL, your function must
 * return -1
 */
int interpolation_helper(int *array, int min, int max, int value)
{
	size_t pos = min + (((double)(max - min) /
						 (array[max] - array[min])) *
						(value - array[min]));

	if ((int)pos > max)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}
	if (min <= max)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			return (interpolation_helper(array, 0, pos - 1, value));
		else if (array[pos] < value)
			return (interpolation_helper(array, pos + 1, max, value));
		else if (array[pos] == value)
			return (pos);
	}
	return (-1);
}
