#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - take 5
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int result = 0, x, y, z, u;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		if (x < 0)
			printf("0\n");
		else
		{
			y = x % 25;
			z = y % 10;
			u = z % 5;
			result += x / 25 + y / 10 + z / 5 + u / 2 + u % 2;
			printf("%d\n", result);
		}
	}
	return (0);
}
