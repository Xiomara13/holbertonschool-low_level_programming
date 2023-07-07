#include <stdio.h>
#include <stdbool.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to the located
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;
		bool match = true;
		while (*n)
		{
			if (*h != *n)
			{
				match = false;
				break;
			}
			h++;
			n++;
		}
		if (match)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
