#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - This program will assign a
 * random number to the variable n each time it is executed.
 *
 * Return: always 0
 */

int main(void)
{
	int n, rest;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	rest = n % 10;
	if (rest < 6 && rest)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rest);
	else if (rest > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, rest);
	else
		printf("Last digit of %d is %d and is 0\n", n, rest);
	return (0);
}
