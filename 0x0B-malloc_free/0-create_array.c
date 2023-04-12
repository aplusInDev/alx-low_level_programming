#include "main.h"
/**
 * create_array - task 0
 * @size: array size
 * @c: char to initialize
 *
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
