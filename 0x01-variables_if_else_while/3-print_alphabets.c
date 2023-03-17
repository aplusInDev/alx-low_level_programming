#include <stdio.h>
/**
 * main - this program prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{

	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	for (ch = 65; ch <= 90; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
