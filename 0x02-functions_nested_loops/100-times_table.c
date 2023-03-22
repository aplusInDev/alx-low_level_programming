#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j, k, a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				a = k / 100;
				b = (k / 10) % 10;
				c = k % 10;
				if (j)
				{
					_putchar(' ');
					if (a)
						_putchar('0' + a);
					else
						_putchar(' ');
					if (a || b)
						_putchar('0' + b);
					else
						_putchar(' ');
					_putchar('0' + c);
				}
				else
					_putchar('0');
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
