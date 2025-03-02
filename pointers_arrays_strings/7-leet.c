#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *leet - function that encodes a string into 1337
 *@s: capitalize words of string
 *Return: changed string
 */
char *leet(char *s)
{
	char a[] = {'a', 'e', 'o', 't', 'l' };
	char b[] = {'A', 'E', 'O', 'T', 'L' };
	char n[] = {4, 3, 0, 7, 1 };
	int i;

	for (i = 0; i < 5; i++)
	{
		if (*s == a[i] || *s == b[i])
			*s = n[i];
	}
	return (s);
}
