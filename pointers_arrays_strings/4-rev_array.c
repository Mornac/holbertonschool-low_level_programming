#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *reverse_array - function that reverses content of array of integers
 *@a: array of integers
 *@n: number of elements to swap
 *Return: value
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
