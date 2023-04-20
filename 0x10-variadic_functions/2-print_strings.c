#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings with separator
 * @separator: string separator
 * @n: number of args
 * @...: the rest of giving parameters
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list arg;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	while (i--)
		printf("%s%s", (str = va_arg(arg, char*)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(arg);
}
