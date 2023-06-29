#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: argument and returns a pointer
 * Return: str
 */
char *cap_string(char *str)
{
	int capitalize = 1;
	char *ptr = str;
	char delimiters[] = " \n\t-.";

	while (*ptr)
	{
		if (capitalize && islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		capitalize = 0;

		if (strchr(delimiters, *ptr) != NULL)
		{
			capitalize = 1;
		}
		ptr++;
	}
	return (str);
}
