#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - prints strings, followed by a new line
 *@separator: the string to be printed between strings
 *@n: number of strings passed to the function
 *Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(args, const char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(NULL)");
		}

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}

		if (i != n)
		{
			printf("(NULL)");
		}
	}

	va_end(args);
	printf("\n");
}
