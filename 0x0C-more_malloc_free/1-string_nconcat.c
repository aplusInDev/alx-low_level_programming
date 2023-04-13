#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - task 1
 * @s1: first string
 * @s2: second string
 * @n: nbre of bytes
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	if (n >= len2)
		n = len2;
	concat_str = malloc((len1 + n + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	for (i = 0; i < n; i++)
		concat_str[len1 + i] = s2[i];
	return (concat_str);
}
