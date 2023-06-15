#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: 0 if it succeeded
 */
int main(int ac, char **av)
{
	unsigned int i, b;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (ac != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(av[1]);
	p[0] = l[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += av[1][i];
	p[1] = l[(add ^ 79) & 63];
	for (i = 0, b = 1; i < len; i++)
		b *= av[1][i];
	p[2] = l[(b ^ 85) & 63];
	for (b = av[1][0], i = 0; i < len; i++)
		if ((char)b <= av[1][i])
			b = av[1][i];
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	for (b = 0, i = 0; i < len; i++)
		b += av[1][i] * av[1][i];
	p[4] = l[(b ^ 239) & 63];
	for (b = 0, i = 0; (char)i < av[1][0]; i++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
