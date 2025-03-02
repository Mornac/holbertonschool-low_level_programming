#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *_strcmp - function that compares two strings
 *@s1: string
 *@s2: string
 *Return: value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
