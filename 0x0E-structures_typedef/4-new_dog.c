#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - copy dog info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	if (!new_d)
		return (NULL);
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;
	return (new_d);
}
