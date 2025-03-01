#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *_strcat - function concatenates two strings
 *@src: string
 *@dest: string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	{
	while (dest[index++])
		dest_len++;

	{
			for (index = 0; src[index]; index++)
				dest[dest_len++] = src[index];
		}
	}
		return (dest);
}
