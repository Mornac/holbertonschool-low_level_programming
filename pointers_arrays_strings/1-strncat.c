#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
 *_strncat - function concatenates two strings wthout terminating null(\0)
 *@src: string
 *@dest: string
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	{
	while (dest[index++])
		dest_len++;

	{
			for (index = 0; src[index] && index < n; index++)
				dest[dest_len++] = src[index];
		}
	}
		return (dest);
}
