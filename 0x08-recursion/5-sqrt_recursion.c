#include "main.h"

/**
 * _sqrt_recursion - task 5
 * @n: passed integer
 *
 * Return: sqrt n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	while (i * i != n && i <= n + 1)
	{
		i++;
		if (i > n)
			return (-1);
	}
	return (i);
}
