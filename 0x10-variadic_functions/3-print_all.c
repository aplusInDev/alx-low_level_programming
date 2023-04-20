#include "variadic_functions.h"
#include <stdio.h>
/**
 * format_char - formats character
 * @separator: string separator
 * @arg: arg pointer
 *
 * Return: nothing
 */
void format_char(char *separator, va_list arg)
{
	printf("%s%c", separator, va_arg(arg, int));
}
/**
 * format_integer - formats int
 * @separator: string separator
 * @arg: arg pointer
 *
 * Return: nothing
 */
void format_integer(char *separator, va_list arg)
{
	printf("%s%d", separator, va_arg(arg, int));
}
/**
 * format_float - formats float
 * @separator: string separator
 * @arg: arg pointer
 *
 * Return: nothing
 */
void format_float(char *separator, va_list arg)
{
	printf("%s%f", separator, va_arg(arg, double));
}
/**
 * format_string - formats string
 * @separator: string separator
 * @arg: arg pointer
 *
 * Return: nothing
 */
void format_string(char *separator, va_list arg)
{
	char *str = va_arg(arg, char*);

	if ((int)(!str))
		str = "(nil)";
	printf("%s%s", separator, str);
}
/**
 * print_all - prints anything
 * @format: type of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list arg;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(arg, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].t)
		{
			if (format[i] == token[j].t[0])
			{
				tokens[j].f(separator, arg);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
