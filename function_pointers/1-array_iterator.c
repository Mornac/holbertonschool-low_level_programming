#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"

/**
 *array_iterator - execute a function given as parameter on element of array
 *@array: array of elements
 *@size: size of the array
 *@action: pointer to the function needed
 *
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
