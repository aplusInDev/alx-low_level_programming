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
			printf("FizzBuzz");
		else if (!(i % 5) && !(i % 3 == 0))
			printf("Buzz");
		else if (!(i % 3) && !(i % 5 == 0))
			printf("Fizz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
