#include <stdio.h>
/**
 * main - this program prints the alphabet in lowercase,
 * in reverse followed by a new line.
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
