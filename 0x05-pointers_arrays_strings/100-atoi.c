#include "main.h"
#include <string.h>

/**
 * _atoi - task 10
 * @s: passed string
 *
 * Return: number
 */
int _atoi(char *s)
{
	unsigned int i, result = 0, sign = 1;

	for (i = 0;  s[i] != '\0'; i++)
	{
		if (s[i] <= '9' && s[i] >= '0')
			result = (result * 10) + (s[i] - 48);
		else if (s[i] == '-')
			sign *= -1;
		else if (result > 0)
			break;
	}
	return (result * sign);
}
