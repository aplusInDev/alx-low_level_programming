#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments
 * @n: the number of arguments
 * @...: the rest of arguments
 *
 * Return: sum of all passed arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list arg;

	if (!n)
		return (0);
	va_start(arg, n);
	while (i--)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
