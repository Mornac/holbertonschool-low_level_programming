#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *print_array - function that prints n elements of an array of integers
 *@a: variable
 *@n: variable
 *Return: always 0
 */
void print_array(int *a, int n)
{
	int arr[5];

	for (n = 0; n < 5; n++)
		printf("%ls, ", &arr[n]);
}
