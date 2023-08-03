#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - function
 * @h: pointer to the head of the list
 * Return: the number of the elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t conteo = 0;

	while (h != NULL)
	{
		h = h->next;
		conteo++;
	}
	return (conteo);
}

