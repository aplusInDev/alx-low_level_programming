#include "main.h"
#include <stdlib.h>
/**
 * _realloc - task 4
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *q;
	void *new_ptr;
	unsigned int min_size, i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	min_size = ((old_size < new_size) ? old_size : new_size);
	p = ptr;
	q = new_ptr;
	for (i = 0; i < min_size; i++)
	{
		q[i] = p[i];
	}
	free(ptr);
	return (new_ptr);
}
