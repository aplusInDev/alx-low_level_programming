#include <stdio.h>
/**
 * main - Fizz-Buzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 5) && !(i % 3))
			printf("FizzBuzz ");
		else if (!(i % 5))
			printf("Buzz ");
		else if (!(i % 3))
			printf("Fizz ");
		else
			printf("%d ", i);
	}

	printf("\n");
	return (0);
}
