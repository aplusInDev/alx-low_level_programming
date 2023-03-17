#include <stdio.h>
/**
 * main - this programme prints all
 * possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int d1, d2;

	for (d1 = 48; d1 < 57; d1++)
		for (d2 = d1 + 1; d2 <= 57; d2++)
		{
			putchar(d1);
			putchar(d2);
			if (d1 == 56)
				continue;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
