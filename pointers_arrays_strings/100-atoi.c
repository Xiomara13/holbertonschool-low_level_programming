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

	while (s[0] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
		while (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
			i++;
		}
		return (sign * result);
}
