#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *rev_string - function that reverses a string
 *@s: variable
 *Return: string
 */
void rev_string(char *s)
{
	int num, temp;
	int length = _strlen(s) - 1;

	for (num = 0; num <= length / 2; num++)
	{
		temp = s[num];
		s[num] = s[length - num];
		s[length - num] = temp;
	}
}
