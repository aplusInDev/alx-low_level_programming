#include "main.h"
/**
 * is_lower - task 6
 * @c: parameter
 *
 * Return: integer
 */
int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * is_delimited - task 6
 * @c: parameter
 *
 * Return: integer
 */
int is_delimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?|\"()[] ";

	for (i = 0; i < 13; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}
/**
* cap_string - task 6
* @s: parameter
*
* Return: string
*/
char *cap_string(char *s)
{
	char *p = s;
	int tmp = 1;

	while (*s)
	{
		if (is_delimiter(*s))
			tmp = 1;
		else if (is_lower(*s) && tmp)
		{
			*s -= 32;
			tmp = 0;
		}
		else
			tmp = 0;
		s++;
	}
	return (p);
}
