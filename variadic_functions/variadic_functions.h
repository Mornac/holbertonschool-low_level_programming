#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>
#include <stdarg.h>

typedef struct format
{
	char *op;
	void(*f)(va_list);
} op_t;

void print_char(char c);
void print_int(int i);
void print_float(float f);
void print_str(char *s);
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
