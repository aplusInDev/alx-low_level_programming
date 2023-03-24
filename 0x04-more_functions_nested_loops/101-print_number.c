#include "main.h"

/**
 * print_number - task 12
 * @n: giving number
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	int a, b, c, d;

	if (n < 0)
	{
		n = -n;
		a = n / 1000;
		b = (n / 100) % 10;
		c = (n / 10) % 10;
		d = n % 10;
		_putchar('-');
	}
	else
	{
		a = n / 1000;
		b = (n / 100) % 10;
		c = (n / 10) % 10;
		d = n % 10;
	}
	if (a)
		_putchar('0' + a);
	if (a || b)
		_putchar('0' + b);
	if ((a || b) || c)
		_putchar('0' + c);
	_putchar('0' + d);
}
