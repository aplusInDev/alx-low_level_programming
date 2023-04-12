#include "main.h"
#include <stdlib.h>
/**
 * _strdup - task 1
 * @str: passed string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];
	return (dup_str);
}
