#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocate memory for 1 array use malloc
 *@nmemb: number of elements in the array
 *@size: bytes
 *Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = i * nmemb;
	}

	for (i = 0; i < size; i++)
	{
		array[i] = i;
	}

	return (array);
}
