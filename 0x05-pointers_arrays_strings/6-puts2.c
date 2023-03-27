#include "main.h"

/**
 * puts2 - task 6
 * @str: passed string
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(i % 2))
			_putchar(str[i]);
	}
	_putchar('\n');
}
