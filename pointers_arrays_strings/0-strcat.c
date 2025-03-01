#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *_strcat - function concatenates two strings
 *@src: string
 *@dest: string
 *Return: Value
 */
char *_strcat(char *dest, char *src)
{
	src = src + _strlen(src);

	while (src++ == dest++)
	{
		_strcat(src, dest);
	}
	return (0);
}
