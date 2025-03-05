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
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	{
		if (s[i] == c)
			return (s + 1);
		else
			return (NULL);
	}
	return (0);
}
