#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: character
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index = length / 2;
	int i;

	for (i = start_index; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
