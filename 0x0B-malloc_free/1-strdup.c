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
	char *cp = malloc(sizeof(str));
	int i;

	if (str == NULL || cp == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		cp[i] = str[i];
	return (cp);
}
