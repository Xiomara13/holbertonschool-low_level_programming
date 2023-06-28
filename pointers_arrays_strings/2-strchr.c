#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string in which the character
 * @c: will be located
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
