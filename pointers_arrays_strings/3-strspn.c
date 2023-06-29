#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string in which the prefix
 * @accept: pointer to the string containing the set
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		length++;
		s++;
	}
	return (length);
}
