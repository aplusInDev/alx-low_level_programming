#include "main.h"

/**
 * print_diagonal - task 7
 * @n: number of space - 1
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		for (i = 0; i < n; i++)
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
					break;
				}
				_putchar(' ');
			}
	else
		_putchar('\n');
}
