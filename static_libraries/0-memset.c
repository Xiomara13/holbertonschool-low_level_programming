#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _memset - fills a memory area with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte to be used for filling
 * @n: number of bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
