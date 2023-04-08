#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - task 0
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	while (i < argc)
	{
		if (!atoi(argv[i]))
		{
			puts("Error");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
