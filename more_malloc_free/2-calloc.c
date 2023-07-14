#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - function
 * @nmemb: number of element
 * @size: size of bytes
 * Return: NULL, ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
