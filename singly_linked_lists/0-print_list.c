#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *@h: head of the list
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	if (h == NULL)
	{
		printf("[0] (nil)");
	}

	printf("[count] h");
	return (0);
}
