#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: passed number
 * @index: passed position
 *
 * Return: 1 (success)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n |= (1 << index);
	return (1);
}
