#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _atoi - convert string to integer
 * @s: passed string
 *
 * Return: number
 */
int _atoi(char *s)
{
	unsigned int i, result = 0, sign = 1;

	for (i = 0;  s[i] != '\0'; i++)
	{
		if (s[i] <= '9' && s[i] >= '0')
			result = (result * 10) + (s[i] - 48);
		else if (s[i] == '-')
			sign *= -1;
		else if (result > 0)
		{
			break;
		}
		else
		{
			puts("Error");
			exit(1);
			return (1);
		}
	}
	return (result * sign);
}
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
		sum += _atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
