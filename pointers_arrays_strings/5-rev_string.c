#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: character
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int start = 0;
	int end = length - 1;
	char temp;

	while (start < end)
	{
		/*Swap characters*/
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		/*Move start and end positions*/
		start++;
		end--;
	}
}
