#include "main.h"
/**
 * _sqrt - same as sqrt
 * @n: passed integer
 * @i: counter
 *
 * Return: i
 */
void _sqrt(int *n, int i)
{
	if (i * i == *n)
		*n = i;
	else if (i * i < *n)
		_sqrt(n, i + 1);
	else
		*n = -1;
}
/**
 * _sqrt_recursion - task 5
 * @n: passed integer
 *
 * Return: sqrt n
 */
int _sqrt_recursion(int n)
{
	_sqrt(&n, 0);
	return (n);
}
