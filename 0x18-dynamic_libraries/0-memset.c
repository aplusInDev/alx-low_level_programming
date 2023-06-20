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
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
