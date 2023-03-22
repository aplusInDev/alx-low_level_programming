#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: is the character passed through the function
 *
 * Return: 0 always
 */
int _islower(int c)
{
	if (c >= 97)
		return (1);
	else
		return (0);
}
