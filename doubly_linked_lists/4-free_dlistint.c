#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - function
 * @head: double pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *liber = head;
	dlistint_t *next_node;

	while (liber != NULL)
	{
		next_node = liber->next;
		free(liber);
		liber = next_node;
	}
}
