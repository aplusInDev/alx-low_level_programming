#include "main.h"
/**
 * jack_bauer -  prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
		{
			a = i / 10;
			b = i % 10;
			c = j / 10;
			d = j % 10;
			_putchar('0' + a);
			_putchar('0' + b);
			_putchar(':');
			_putchar('0' + c);
			_putchar('0' + d);
			_putchar('\n');
		}
}
