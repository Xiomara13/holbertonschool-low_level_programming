#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - return the number of elementsin the list
 * @h: pointer
 * Return: the number of elementsof the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_cont = 0;

	while (h != NULL)
	{
		h = h->next;
		node_cont++;
	}
	return (node_cont);
}
