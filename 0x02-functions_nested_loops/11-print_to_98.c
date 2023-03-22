#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * @n: first number
 *
 * Return: 0
 */
void print_to_98(int n)
{
	int a, b, c;

	while (n != 98)
	{
		if (n < 98)
		{
			a = n / 10;
			b = n % 10;
			if (n < 0)
			{
				_putchar('-');
				a = -a;
				b = -b;
			}
			if (a)
				_putchar('0' + a);
			_putchar('0' + b);
			n++;
		}
		else
		{
			a = n / 100;
			b = (n / 10) % 10;
			c = n % 10;
			if (a)
				_putchar('0' + a);
			_putchar('0' + b);
			_putchar('0' + c);
			n--;
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('0' + 9);
	_putchar('0' + 8);
	_putchar('\n');
}
