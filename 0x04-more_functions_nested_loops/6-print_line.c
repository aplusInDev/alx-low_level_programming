#include "main.h"

/**
 * print_line - task 6
 * @n: number of '_'
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n > 0)
		while (n--)
			_putchar('_');
	_putchar('\n');
}
