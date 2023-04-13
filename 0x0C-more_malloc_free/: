#include "main.h"
#include <stdlib.h>
/**
 * _calloc - task 2
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory or NULL if function fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		alloc[i] = 0;
	return ((void *)alloc);
}
