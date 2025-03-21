#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_char - prints characters
 *@args: arguments
 *
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 *print_int - prints integers
 *@args: arguments
 *
 */
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 *print_float - prints floats
 *@args: arguments
 *
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 *print_string - prints strings
 *@args: arguments
 *
 */
void print_string(va_list *args)
{
	char *str = va_arg(*args, char*);

	if (!str)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 *print_all - prints all types of arguments
 *@format: list of types of arguments passed to function
 *
 */
void print_all(const char * const format, ...)
{
	format_t formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list args;
	int i = 0, j;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j].format)
		{
			if (format[i] == formats[j].format)
			{
				printf("%s", separator);
				formats[j].print_f(&args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
