#include "main.h"

/**
 * more_numbers - task 5
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, j, a, b;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			a = j / 10;
			b = j % 10;
			if (a)
				_putchar('0' + a);
			_putchar('0' + b);
			j++;
		}
		_putchar('\n');
	}
}
