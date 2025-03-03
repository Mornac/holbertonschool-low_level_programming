#include "main.h"
#include <stdio.h>
#include <string.h>
#include "2-strlen.c"

/**
 *_strchr -  locates a character in a string
 *@c: character
 *@s: string
 *
 *Return: a pointer
 */
char *_strchr(char *s, char c)
{
	while (c != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
