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
	int i, result = 0, count1 = 0, count2 = 0;

	for (i = 0;  s[i] != '\0'; i++)
	{
		if (s[i] <= '9' && s[i] >= '0')
		{
			if (!result)
				result += (s[i] - 48);
			else
				result = ((result * 10) + (s[i] - 48));
			if (s[i + 1] == ' ')
				break;
		}
		if (s[i] == '+')
			count1++;
		if (s[i] == '-')
			count2++;
	}
	return ((count1 < count2) ? (-result) : (result));
}
