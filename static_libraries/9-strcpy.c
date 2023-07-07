#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: the buffer pointed
 * @src: string pointed
 * Return: ptr
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
