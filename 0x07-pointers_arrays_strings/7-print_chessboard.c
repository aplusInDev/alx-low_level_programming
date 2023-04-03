#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_chessboard - task 6
 * @a: ptr to an array of 8 characters
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
