#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n: first number
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int i, a, b, c;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			a = i / 10;
			b = i % 10;
			if (!a)
				_putchar('0' + b);
			else
			{
				_putchar('0' + a);
				_putchar('0' + b);
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			if (!a)
			{
				_putchar('0' + b);
				_putchar('0' + c);
			}
			else
			{
				_putchar('0' + a);
				_putchar('0' + b);
				_putchar('0' + c);
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
