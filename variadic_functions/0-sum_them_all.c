#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: constant unsigned int
 *Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int total = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		total += va_arg(args, int);

	va_end(args);
	return (total);
}
