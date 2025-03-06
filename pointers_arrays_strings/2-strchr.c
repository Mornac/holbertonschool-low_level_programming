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
	char ch;

	for (ch = c; *s != ch; ++s)
		if (*s == '\0')
			return (NULL);
	return ((char *)s);
}
