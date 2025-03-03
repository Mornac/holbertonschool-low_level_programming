#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies memory area
 *@dest: destination of memory area
 *@src: source from memory area
 *@n: variable bytes a remplir
 *
 *Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = *src;
		*src = n;
	}

	return (dest);
}
