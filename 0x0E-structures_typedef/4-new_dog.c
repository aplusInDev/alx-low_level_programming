#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * _memcpy - task 4
 * @dest: distination
 * @src: source
 * @n: size
 *
 * Return: nothing
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	char *d = (char *)dest;
	const char *s = (const char *)src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
/**
 * my_strdup - task 4
 * @src: string source
 *
 * Return: string
 */
char *my_strdup(const char *src)
{
	size_t len = strlen(src) + 1;
	char *dst = malloc(len);

	if (dst == NULL)
	{
		return (NULL);
	}
	_memcpy(dst, src, len);
	return (dst);
}
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
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = my_strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = my_strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
