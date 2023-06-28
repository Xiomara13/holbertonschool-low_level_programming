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
	int isaccepted;

	while (*s != '\0')
	{
		isaccepted = 0;
		for (char *ptr = accept; *ptr != '\0'; ptr++)
				{
				if (*s == *ptr)
				{
					isaccepted = 1;
					break;
				}
				}
		if (!isaccepted)
		{
			break;
		}
		length++;
		s++;
	}
	return (length);
}
