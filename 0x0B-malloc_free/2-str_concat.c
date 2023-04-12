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
	char *result;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j, k;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	result = malloc((len1 + len2 + 3) * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	j = i;
	result[j] = ' ';
	for (k = 0, j = i; s2[k] != '\0'; k++, j++)
		result[j] = s2[k];
	return (result);
}
