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
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		printf("Memory allocation failed\n");
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		printf("String duplucation failed\n");
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	printf("[%u] %s\n", new_node->len, new_node->str);

	free(new_node);
	return (0);
}
