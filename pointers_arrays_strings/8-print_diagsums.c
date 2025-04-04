#include "main.h"
#include "2-strlen.c"
#include <stdio.h>

/**
 *print_diagsums - prints sum of two diagonals of square matrix of integers
 *@a: array of integers to be sorted
 *@size: number of elements in the array to be sorted
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
