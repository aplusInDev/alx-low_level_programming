#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strstr - task 5
 * @haystack: string
 * @needle: substring
 *
 * Return: h (success) or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*haystack != '\0' && *n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
		{
			return (h);
		}
		haystack = h + 1;
	}
	return (NULL);
}
