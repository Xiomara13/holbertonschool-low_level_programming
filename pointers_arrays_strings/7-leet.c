#include <stdio.h>
#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: argument and return a pointer
 * Return: str
 */
char *leet(char *str)
{
	char *ptr = str;
	char replacements[5][2] = {
		{'a', '4'},
		{'e', '3'},
		{'o', '0'},
		{'t', '7'},
		{'l', '1'}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		char lower = replacements[i][0];
		char upper = lower - 32;
		char replacement = replacements[i][1];

		while (*ptr != '\0')
		{
			if (*ptr == lower || *ptr == upper)
			{
				*ptr = replacement;
			}
			ptr++;
		}
		ptr = str;
	}
	return (str);
}
