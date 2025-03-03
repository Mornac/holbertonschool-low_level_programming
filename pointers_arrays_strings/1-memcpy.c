#include "main.h"
#include <stdio.h>
#include <string.h>
#include "2-strlen.c"

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
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n ; i++)
	{
		cdest[i] = csrc[i];
	}

	return (cdest);
}
