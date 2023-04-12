#include "main.h"
#include <stdlib.h>
/**
 * str_concat - task 2
 * @s1: passed string
 * @s2: passed string
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	for (unsigned int i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	for (unsigned int i = 0; i <= len2; i++)
		concat_str[len1 + i] = s2[i];
	return (concat_str);
}
