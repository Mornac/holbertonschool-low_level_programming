#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory whith a constant btyte
 * @s: pointer
 * @b: constant byte
 * @n: variable bytes a remplir
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}
