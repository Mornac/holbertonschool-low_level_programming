#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *array_range - create an array of integers
 *@min: minimum
 *@max: maximum
 *Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int n = 0;

	array = malloc(sizeof(int));

	if (min > max)
		return (NULL);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		array[i] = i + 1;

	for (i = 0; i < n; i++)
		array[i] = i;

	free(array);
	return (0);
}
