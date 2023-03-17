#include <stdio.h>
/**
 * main - this program prints the alphabet in lowercase,
 * except q and e,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
