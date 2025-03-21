#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_char - prints characters
 *@c: character
 *
 */
void print_char(char c)
{
	printf("c")
}

/**
 *print_int - prints integers
 *@i: integer
 *
 */
{
	printf("i");
}

/**
 *print_float - prints floats
 *@f: float
 *
 */
{
	printf("f");
}

/**
 *print_str - prints strings
 *@str: string
 *
 */
{
	printf("str");
}

/**
 *print_all - prints all types of arguments
 *@format: list of types of arguments passed to function
 *Return: Always 0
 */
void print_all(const char * const format, ...)
{
	op_t format[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"*s", print_str},
		{'\0', NULL}
	};

	va_list args;
	int i, j;

	va_start(args, format);

	while (*format != '\0' && (format))
	{
		while (struct[j])
		{
			if (format[i] == struct[j].op)
			printf(", ");
			struct[j].f(args)
			break;
		j++;
		}
	i++;
	}

	printf("\n");
	va_end(args);
}
