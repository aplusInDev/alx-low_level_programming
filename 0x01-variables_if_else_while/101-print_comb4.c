#include <stdio.h>
/**
 * main - this programme prints all
 * possible different combinations of three digits.
 *
 * Return: 0
 */
int main(void)
{
	int d1, d2, d3;

	for (d1 = 48; d1 < 56; d1++)
		for (d2 = d1 + 1; d2 < 57; d2++)
			for (d3 = d2 + 1; d3 <= 57; d3++)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);
				if (d1 == 55)
					continue;
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
