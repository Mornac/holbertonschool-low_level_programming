#include "main.h"
#include <stdio.h>

/**
 *_puts - function that prints a string to stdout
 *@str: variable
 *Return: string
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s]; str++)
	{
		_putchar (str[s]);
	}
	_putchar ('\n');
}
