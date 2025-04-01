#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - returns number of elements in a linked dlistint_t list
 *@h:head of the list
 *Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t listInt = 0;

	while (h)
	{
		if (!h)
			return (0);

		listInt++;
		h = h->next;
	}

	return (listInt);
}
