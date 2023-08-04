#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function
 * @head: double pointer
 * @index: variable
 * Return: dev
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *dev = head;

	while (dev != NULL && index > 0)
	{
		dev = dev->next;
		index--;
	}
	return (dev);
}
