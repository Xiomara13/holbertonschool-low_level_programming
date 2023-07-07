#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the accepted bytes
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
