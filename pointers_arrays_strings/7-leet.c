#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *leet - function that encodes a string into 1337
 *@s: encode string
 *Return: encoded string
 */
char *leet(char *s)
{
	char *e = s;
	char a[] = {'a', 'e', 'o', 't', 'l' };
	char n[] = {4, 3, 0, 7, 1 };
	int i;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == a[i] || *s == a[i] - 32)
				*s = n[i] + '0';
		}
		s++;
	}
	return (e);
}
