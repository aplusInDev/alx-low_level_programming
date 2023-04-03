#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: passed string
 * @c: passed character
 *
 * Return: string from the first occ
 * if character is founded
 * NUll if not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
