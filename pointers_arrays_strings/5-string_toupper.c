#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *string_toupper - function that changes all lowercase letters to uppercase
 *@str: change to uppercase
 *Return: changed string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
