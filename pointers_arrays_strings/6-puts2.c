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

	for (i = 0; str[i] <= 9; str++)
	{
		_putchar (str[i] / 2);
	}
	_putchar ('\n');
}
