#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int i, t1 = 0, t2 = 1, nextTerm;

	for (i = 1; i < 50; ++i)
	{
		nextTerm = t1 + t2;
		printf("%d ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
