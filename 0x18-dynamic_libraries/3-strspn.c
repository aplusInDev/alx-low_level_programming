#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strspn - task 3
 * @s: fisrt param
 * @accept: second param
 *
 * Return: (unsigned int)i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0' && strchr(accept, s[i]) != NULL)
	{
		i++;
	}

	return (i);
}
