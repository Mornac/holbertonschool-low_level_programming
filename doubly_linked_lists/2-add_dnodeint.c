#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *@head: head of the list
 *@n: integer
 *Return: the address of the new element, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (head != NULL)
	{
		new_node->next = *head;

		if (*head)
		{
			(*head)->prev = new_node;
		}

		else
		{
			new_node->next = NULL;
		}
	}

	return (new_node);
	free(new_node);
}
