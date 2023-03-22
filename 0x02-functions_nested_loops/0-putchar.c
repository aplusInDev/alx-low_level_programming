#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - task 0
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char s[] = "_putchar";
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');

	return (0);
}
