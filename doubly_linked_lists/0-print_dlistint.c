#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_dlistint - function
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_cont = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_cont++;
	}
	return (node_cont);
}
