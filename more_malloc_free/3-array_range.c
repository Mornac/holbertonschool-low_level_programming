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

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
		return (NULL);

	for (i = min; i < max; i++)
	{
		array[n] = i;
		n++;
	}

	return (array);

	return (NULL);
}
