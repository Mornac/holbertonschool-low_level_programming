#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *print_rev - function that prints a string in reverse
 *@s: variable
 *Return: string
 */
void print_rev(char *s)
{
	int string;
	int length = _strlen(s);

	for (string = length - 1; string >= 0; string--)
	{
		_putchar (s[string]);
	}
	_putchar ('\n');
}
