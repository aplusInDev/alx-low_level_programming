#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: passed binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i;

	if (!b)
		return (0);
	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num <<= 1;
		num += *b - '0';
	}
	return (num);
}
