#include "3-calc.h"
/**
 * main - check the code
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 (success)
 */
int main(int ac, char *av[])
{
	int (*op_fn)(int, int), a, b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	op_fn = get_op_func(av[2]);
	if (!op_fn)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_fn(a, b));
	return (0);
}
