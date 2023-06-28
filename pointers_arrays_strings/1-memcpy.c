#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _memcpy - copies a memory area from source to destination
 * @dest: pointer to the destination memory
 * @src: pointer to the source memory area
 * @n: number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n > 0)
	{
		*ptr_dest = *ptr_src;
		ptr_dest++;
		ptr_src++;
		n--;
	}
	return (dest);
}
