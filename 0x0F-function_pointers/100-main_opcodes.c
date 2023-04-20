#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @ac: arg count
 * @av: arg vector
 *
 * Return: 0 (success)
 */
int main(int ac, char *av[])
{
	char *p = (char *)main;
	int b;

	if (ac != 2)
		printf("Error\n"), exit(1);
	b = atoi(av[1]);
	if (b < 0)
		printf("Error\n"), exit(2);
	while (b--)
		printf("%02hhx%s", *p++, b ? " " : "\n");
	return (0);
}
