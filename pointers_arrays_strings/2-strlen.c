#include "main.h"
#include <stdio.h>

/**
 *_strlen - function that returns the length of a string
 *@s: variable
 *return: Always 0
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
