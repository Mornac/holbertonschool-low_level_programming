#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *cap_string - function that capitalizes words of a string
 *@s: capitalize words of string
 *Return: changed string
 */
char *cap_string(char *s)
{
	char *temp;
	char prev;

	temp = s;
	if (*s <= 'z' && *s >= 'a')
		*s -= 32;
	do {
		if (*s <= 'z' && *s >= 'a')
		{
			prev = *(s - 1);
			switch (prev)
			{
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case ' ':
			case '\t':
			case '\n':
				*s -= 32;
				break;
			}
		}
	} while (*s++);
	return (temp);
}
