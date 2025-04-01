#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
**add_node_end - adds a new node at the end of a list_t list
*@head: head of the list
*@str: the string to be duplicate
*Return: the address of the new element, or NULL it it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node, *end;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	while (str[len] != '\0') 
		len++;

	if (*head)
	{
		end = *head;

		while (end->next)
		{
			end = end->next;
		}
		end->next = new_node;
	}
	else
		*head = new_node;

	if (str)
	{
		new_node->str = strdup(str);
	}
	else
	{
		new_node->str = NULL;
	}

	new_node->len = len;

	new_node->next = NULL;

	return (new_node);
}
