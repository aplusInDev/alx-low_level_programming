#include "main.h"
/**
 * string_toupper - task 5
 * @s: parameter
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 123)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
