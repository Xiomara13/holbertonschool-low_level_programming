#include <stdio.h>
#include "main.h"
/**
 * _strcmp - calculate the difference
 * @s1: character
 * @s2: character
 * Return: 1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		int diff = *s1 - *s2;
		if (diff != 0)
			return (diff);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == '\0')
		return (-1);
	else
		return (1);
}
