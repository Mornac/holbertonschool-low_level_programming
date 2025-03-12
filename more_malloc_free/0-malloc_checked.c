#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *malloc_checked - allocate memory using malloc
 *@b: variable
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = (int *) malloc(10 * sizeof(int));

	if (i == NULL)
	{
		return (NULL);
	}
	else
	{
		return (NULL);
	}

	for (b = 1; b <= 98; b++)
	{
		i[b] = b;
	}
}
