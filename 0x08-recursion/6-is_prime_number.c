#include "main.h"

/**
 * is_prime_number - task 6
 * @n: passed integer
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == 1 || n == -1)
	{
		return (0);
	}
	while (i < 9)
	{
		if (n % i == 0 && i != n)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
