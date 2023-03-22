#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		_putchar('0' + (-last_digit));
		return (-last_digit);
	}
	else
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
