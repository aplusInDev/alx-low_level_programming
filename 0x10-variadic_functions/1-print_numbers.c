#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers with separator
 * @separator: string separator
 * @n: number of args
 * @...: the rest of giving parameters
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list arg;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	while (i--)
		printf("%d%s", va_arg(arg, int), i ? (separator ? separator : "") : "\n");
	va_end(arg);
}
