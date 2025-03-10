#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array of chars and initialize with a specific char
 *@c: specific char
 *@size: the size of array
 *
 *Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
	array[count] = c;

	return (array);

	free(array);

	return (0);
}
