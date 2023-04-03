#include "main.h"
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
	int i, tmp = 0;

	for (i = 0; s[i]; i++)
		if (s[i] == c)
		{
			tmp = 1;
			break;
		}
	return ((tmp) ? s + i : '\0');
}
