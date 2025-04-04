#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: head of the list
 *Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			return (0);
		}

		count++;
		h = h->next;
	}

	return (count);
}
