#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *print_array - function that prints n elements of an array of integers
 *@a: array
 *@n: number of members
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
