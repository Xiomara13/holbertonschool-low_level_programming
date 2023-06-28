#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: argument and returns a pointer
 * Return: str
 */
char *cap_string(char *str)
{
	int capitalize = 1;

	while (*str != '\0')
	{
		if (capitalize && islower(*str))
		{
			*str = toupper(*str);
		}
		if (*str == ' ' || *str == '\t' || *str == '\n' ||
				*str == ',' || *str == ';' || *str == '.' ||
				*str == '!' || *str == '?' || *str == '"' ||
				*str == '(' || *str == ')' || *str == '{' ||
				*str == '}')
		{
			capitalize = 1;
		}
		else
		{
			capitalize = 0;
		}
		str++;
	}
	return (str);
}
