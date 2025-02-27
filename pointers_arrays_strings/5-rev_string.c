#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *rev_string - function that reverses a string
 *@s: variable
 *Return: string
 */
void rev_string(char *s)
{
	int str;
	int length = _strlen(s);

	for (str = length - 1; str >= 0; str--)
	{
		_putchar (s[str]);
	}
	_putchar ('\n');
}
