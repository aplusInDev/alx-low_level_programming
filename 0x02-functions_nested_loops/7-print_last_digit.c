#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit = _abs(n) % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
