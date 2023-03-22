#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, k, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			a = k % 10;
			b = k / 10;
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (k <= 9)
				{
					_putchar(' ');
					_putchar('0' + k);
				}
				else if (k > 9)
				{
					_putchar('0' + b);
					_putchar('0' + a);
				}
			}
		}
		_putchar('\n');
	}
}
