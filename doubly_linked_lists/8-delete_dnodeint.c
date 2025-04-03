#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes node at index of a dlistint_t linked list
 *@head: head of the list
 *@index: index of the list where new node should be added
 *index starts at 0
 *Return: 1 if succeed, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		if (current->prev != NULL)
			current->prev->next = current->next;

		if (current->next != NULL)
			current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
