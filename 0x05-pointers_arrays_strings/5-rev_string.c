#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: passed string
 *
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
