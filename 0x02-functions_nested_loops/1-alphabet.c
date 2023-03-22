#include "main.h"

/**
 * print_alphabet - this program prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
