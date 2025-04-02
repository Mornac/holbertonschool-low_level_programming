#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end  - adds a new node at the end of a dlistint_t list
 *@head: head of the list
 *@n: integer
 *Return: the address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *end;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head)
	{
		end = *head;

		while (end->next)
		{
			end = end->next;
		}
		end->next = new_node;
		new_node->prev = end;
	}
	else
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	return (new_node);
}
