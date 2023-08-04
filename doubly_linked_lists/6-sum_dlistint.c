#include<stdio.h>
#include<stddef.h>
#include "lists.h"
/**
 * sum_dlistint - function
 * @head: double pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *data = head;

	while (data != NULL)
	{
		sum += data->n;
		data = data->next;
	}
	return (sum);
}
