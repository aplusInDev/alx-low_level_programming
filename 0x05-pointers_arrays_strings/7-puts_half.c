#include "main.h"
#include <string.h>

/**
 * puts_half - task 7
 * @str: passed string
 *
 */
void puts_half(char *str)
{
	int i, len = strlen(str);

	if (!(len % 2))
		for (i = len / 2; str[i] != '\0'; i++)
			putchar(str[i]);
	else
		for (i = (len / 2) + 1; str[i] != '\0'; i++)
			putchar(str[i]);

	putchar('\n');
}
