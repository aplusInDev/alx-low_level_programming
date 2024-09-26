#include "3-calc.h"
/**
 *  get_op_func - takes s as parameter and
 * returns a pointer to function that accept
 * two integers and returns an integer
 *
 * Args:
 *  @s: the operation sign (e.g: +, -, etc)
 *
 * Return:
 *  pointer to function or NULL
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
