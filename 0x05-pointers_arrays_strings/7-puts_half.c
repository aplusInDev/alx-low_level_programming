#include "main.h"
#include <string.h>

/**
 * puts_half - task 7
 * @str: passed string
 *
 */
void puts_half(char *str)
{
	int i;

	for (i = strlen(str) / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
