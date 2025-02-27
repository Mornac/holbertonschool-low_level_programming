#include "main.h"
#include <stdio.h>

/**
 *print_rev - function that prints a string in reverse
 *@s: variable
 *Return: string
 */
void print_rev(char *s)
{
	int string;

	while (*s++)
		string--;

	_putchar (s[string]);
	_putchar ('\n');
}
