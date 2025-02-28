#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *puts2 - function that prints other character starting with the 1st character
 *@str: variable
 *Return: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar (str[i]);
		}
	}
	_putchar ('\n');
}
