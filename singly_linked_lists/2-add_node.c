#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
**add_node - adds a new node at the beginning of a list_t list
*@head: head of the list
*@str: the string to be duplicate
*Return: the address of the new element, or NULL it it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new_node->len = len;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
