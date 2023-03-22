#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number
 *
 * Return: 0
 */
int main(void)
{
	int x = 0, sum = 0;

	while (x < 1024)
	{
		if (!(x % 5) || !(x % 3))
			sum += x;
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
