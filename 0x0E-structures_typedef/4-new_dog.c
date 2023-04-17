#include "dog.h"
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
	dog_t *new_d = (dog_t *) malloc(sizeof(dog_t));

	if (new_d == NULL)
		return (NULL);
	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;
	return (new_d);
}
