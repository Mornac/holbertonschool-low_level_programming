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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
