#include "main.h"

/**
 * rev_string - task 6
 * @str: passed string
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}