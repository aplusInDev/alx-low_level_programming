#include <stdio.h>
/**
 * main - this programme prints all
 * possible different combinations of two two-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int d1, d2, d3, d4;

	for (d1 = 48; d1 <= 57; d1++)
		for (d2 = 48; d2 <= 57; d2++)
			for (d3 = d1 ; d3 <= 57; d3++)
				for (d4 = d2; d4 <= 57; d4++)
				{
					if ((d3 == d1 && d4 == d2) || (d3 == d2 && d4 == d1))
						continue;
					putchar(d1);
					putchar(d2);
					putchar(' ');
					putchar(d3);
					putchar(d4);
					if (d1 == 57 && d2 == 56 && d3 == 57 && d4 == 57)
						continue;
					putchar(',');
					putchar(' ');
				}
	putchar('\n');
	return (0);
}
