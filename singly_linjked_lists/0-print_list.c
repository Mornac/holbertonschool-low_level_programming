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
	unsigned int len;
	struct list_s *next;
	char *str;
	int count = 0;

	while (str != NULL)
	{
		count++;
		str = str->next;
	}
	
	if (str = NULL)
	{
		printf("[0] (nil)");
	}

	printf("[len] str");
	return (0);
}
