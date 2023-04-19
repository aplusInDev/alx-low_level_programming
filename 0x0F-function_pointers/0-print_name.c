#include "function_pointers.h"
/**
 * print_name - task 0
 * @name: given name
 * @f: given function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
