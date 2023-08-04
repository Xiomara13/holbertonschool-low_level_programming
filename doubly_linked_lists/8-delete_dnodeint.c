#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if the node is successfully deleted, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;
	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
