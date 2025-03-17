#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: array of elements
 *@size: number of elements in the array
 *@cmp: pointer to the function used to compare values
 *
 *Return: 0 ou -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[size]);
	}
	return (0);
}
