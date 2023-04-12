#include "main.h"
#include <stdlib.h>
/**
 * create_array - task 0
 * @size: array size
 * @c: char to initialize
 *
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
