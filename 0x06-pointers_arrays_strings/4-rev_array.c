#include "main.h"
/**
 * reverse_array - task 4
 * @a: first string
 * @n: second string
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
