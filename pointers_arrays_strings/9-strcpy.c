#include "main.h"
#include <stdio.h>
#include "2-strlen.c"

/**
*_strcpy - function copies string pointed by src to buffer pointed to by dest
 *@dest: buffer
 *@src: variable
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
