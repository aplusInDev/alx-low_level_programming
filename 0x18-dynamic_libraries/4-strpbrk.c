#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strpbrk - task 4
 * @s: fisrt param
 * @accept: second param
 *
 * Return: s (success), NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
