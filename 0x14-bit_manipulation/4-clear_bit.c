#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: passed number
 * @index: given position
 *
 * Return: 1 (success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
