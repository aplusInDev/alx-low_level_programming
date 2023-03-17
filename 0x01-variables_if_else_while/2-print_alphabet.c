#include <stdio.h>
/**
 * main - this program prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
