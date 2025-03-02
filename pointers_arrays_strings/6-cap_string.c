#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *cap_string - function that capitalizes words of a string
 *@str: capitalize words of string
 *Return: changed string
 */
char *cap_string(char *str)
{
	int c = 0;

	while (str[c])
	{
		while (!(str[c] >= 'a' && str[c] <= 'z'))
		{
			c++;
			{
				if (str[c - 1] == ' ' ||
				if (str[c - 1] == '\t' ||
				if (str[c - 1] == '\n' ||
				if (str[c - 1] == ',' ||
				if (str[c - 1] == ';' ||
				if (str[c - 1] == '.' ||
				if (str[c - 1] == '!' ||
				if (str[c - 1] == '?' ||
				if (str[c - 1] == '"' ||
				if (str[c - 1] == '(' ||
				if (str[c - 1] == ')' ||
				if (str[c - 1] == '{' ||
				if (str[c - 1] == '}' ||
				index == 0)
					str[c] -= 32;
			}
		c++;
		}
	}
	return (str);
}
