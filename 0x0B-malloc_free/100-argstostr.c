#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
 * argstostr - task 5
 * @ac: argument count
 * @av: argument vector
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *concat_str;
	int l = 0, i, j, count;

	if (ac <= 1 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
		count += strlen(av[i]);
	concat_str = malloc(sizeof(char) * count + 1);
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, l++)
		{
			concat_str[l] = av[i][j];
		}
		concat_str[l++] = '\n';
	}
	return (concat_str);
}
