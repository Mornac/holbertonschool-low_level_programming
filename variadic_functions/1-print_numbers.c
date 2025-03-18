#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers, followed by a new line
 *@separator: the string to be printed between numbers
 *@n: number of int passed to the function
 *Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int nb;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		nb = va_arg(args, int);

		printf("%d", nb);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
