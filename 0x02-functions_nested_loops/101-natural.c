#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
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
