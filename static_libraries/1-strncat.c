#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: destination string
 * @src: source string
 * @n: becomes zero or when the end of the src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
