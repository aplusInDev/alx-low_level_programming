#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: fisrt param
 * @b: second param
 * @n: n bytes of the memory area pointed to by s
 * with the const byte b
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s++) = b;
	return (s);
}
