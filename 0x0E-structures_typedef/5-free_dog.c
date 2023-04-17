#include "dog.h"
/**
 * free_dog - clean stored dog info
 * @d: dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
