#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - return pointer to newly allocated space in memory
 *@str: string
 *
 *Return: a pointer or NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}

	cpy[len] = '\0';

	free(cpy);
	return (0);
}
