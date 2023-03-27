#include "main.h"

/**
 * _strcpy- task 9
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}
