#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int i, n = 100, t1 = 1, t2 = 2, nextTerm;

	printf("Fibonacci Series: \n");
	for (i = 1; i <= n; ++i)
	{
		printf("%d ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		printf("\n");
	}
	return (0);
}
