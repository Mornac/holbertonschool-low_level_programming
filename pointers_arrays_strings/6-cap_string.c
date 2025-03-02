#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *cap_string - function that capitalizes words of a string
 *@str: capitalize words of string
 *Return: changed string
 */
char *cap_string(char *str)
{
	int c = 0;
	int spaceCounter = 0;

	while (str[c] != '\0')
	{
		if ((spaceCounter % 2 == 1) && str[c] >= 'a' && str[c] <= 'z')
		{
			str[c] = str[c] - 32;
		}
		else if (str[c] == ' ')
		{
			spaceCounter++;
		}
		c++;
	}
	return (str);
}
