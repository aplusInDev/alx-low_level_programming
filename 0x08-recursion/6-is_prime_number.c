#include "main.h"

/**
 * is_prime - check if n is prime
 * @n: passed integer
 * @i: counter
 */
void is_prime(int *n, int i)
{
	if (*n <= 2)
	{
		*n = 0;
	}

	if (*n % i == 0 && i != *n)
	{
		*n = 0;
		return;
	}
	if (i < 9)
		is_prime(n, i + 1);
	else
		*n = 1;
}
/**
 * is_prime_number - task 6
 * @n: passed integer
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	is_prime(&n, 2);

	return (n);
}
