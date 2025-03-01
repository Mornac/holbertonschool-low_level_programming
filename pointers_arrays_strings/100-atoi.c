#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *_atoi - function that convert a string to an integer
 *@s: variable
 *Return: Value
 */
int _atoi(char *s)
{
	int n = 0;
	int num = 0;

	while (*s < '0' || *s > '9')
	{
		if (*s == '-')
			num++;
		else if (*s == '\0')
			return (0);
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (n < '0')
			n *= 10;
		n -= (int)(*s - '0');
		s++;
	}

	if (num % 2 == '0')
		n *= -1;
	return (n);
}
