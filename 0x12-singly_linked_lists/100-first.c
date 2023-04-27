#include <stdio.h>
#include <stdlib.h>

/**
 * before_main - this function will called before the main function is excuted
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,"
			"\nI bore my house upon my back!\n");
}
