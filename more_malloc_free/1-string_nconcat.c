#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - function
 * @s1: pointer
 * @s2: pointer
 * @n: character
 * Return: concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int concatLen;
	unsigned int len1, len2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	concatLen = len1 + n + 1;

	concat = malloc(concatLen * sizeof(char));

	if (concat == NULL)
		return (NULL);
	strncpy(concat, s1, len1);
	strncpy(concat + len1, s2, n);
	concat[concatLen - 1] = '\0';
	return (concat);
}
