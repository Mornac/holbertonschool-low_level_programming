#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *puts_half - function that prints half of a string
 *@str: variable
 *Return: string
 */
void puts_half(char *str)
{
	int i, mid, length;

	for (length = 0; str[length] != '\0'; length++)
	{
		if (length % 2 != 0)
		{
			mid = (length + 1) / 2;
			for (i = mid + 1; i < length; i++)
			{
				_putchar (str[i]);
			}
		}
	}
	_putchar ('\n');
}
