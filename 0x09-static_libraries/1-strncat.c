#include "main.h"
/**
 * _strncat - task 0
 * @dest: first string
 * @src: second string
 * @n: most n bytes from src
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
