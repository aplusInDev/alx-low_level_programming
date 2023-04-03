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

		while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (h);
		}
		haystack++;
	}
	return (NULL);
}
