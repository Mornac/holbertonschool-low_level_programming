#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 **get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 *@head: head of the list
 *@index: index of the node, starting from 0
 *Return: nth node or NULL if no node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL);
}
