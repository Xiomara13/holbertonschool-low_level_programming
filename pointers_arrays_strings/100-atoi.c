#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: character
 * Return: result * sign
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';

		if (result > INT_MAX / 10)
			if (result == INT_MAX / 10 && digit > INT_MAX % 10)
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		result = result * 10 + digit;
		i++;
	}
	return (sign * result);
}