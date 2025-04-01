#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - prints all the elements of a dlistint_t list
 *@h:head of the list
 *Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t printlist = 0;

	while (h)
	{
		printf("%i\n", h->n);
		printlist++;
		h = h->next;
	}

	return (printlist);
}
