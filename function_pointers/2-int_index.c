#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: array of elements
 *@size: number of elements in the array
 *@cmp: pointer to the function used to compare values
 *
 *Return: Value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
