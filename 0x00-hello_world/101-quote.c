#include <unistd.h>
/**
 * main - Write a C program that prints exactlyl
 * and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error
 *
 * Return: 1 (Success)
 */
int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quot, 59);
	return (1);
}
