#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: character
 */
void print_rev(char *s)
{
	int length = 0;
	char *p = s;
	int i;
	/*Find the length of the string*/
	while (*p != '\0')
	{
		length++;
		p++;
	}
	/*Print the string in reverse*/
	for (i = length - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
