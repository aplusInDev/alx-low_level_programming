#include <string.h>
#include "main.h"

/**
 * is_pld - check if passed string is palindrome
 * @s: passed string
 * @r: tmp
 * @i: counter
 */
void is_pld(char *s, int *r, int i)
{
	int size = strlen(s);

	if (i == size / 2)
	{
		return;
	}
	if (*(s + i) == *(s + (size - i - 1)))
	{
		*r = 1;
		is_pld(s, r, i + 1);
	}
	else
		*r = 0;
}
/**
 * is_palindrome - check if passed string is palindrome
 * @s: passed string
 *
 * Return: 1 if s is palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int r = 1;

	is_pld(s, &r, 0);
	return (r);
}
