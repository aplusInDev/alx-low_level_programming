#include "main.h"

/**
 * print_triangle - task 10
 * @size: number of line
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
