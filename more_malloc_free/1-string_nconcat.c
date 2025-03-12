#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - concatenate 2 strings
 *@s1: first string
 *@s2: second string
 *@n: number of bytes
 *Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_n;
	unsigned int length = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;
	concat_n = malloc(sizeof(char) * length + 1);

	if (concat_n == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		concat_n[length++] = s1[i];

	for (i = 0; s2[i] && i <= n; i++)
		concat_n[length++] = s2[i];

	concat_n[length] = '\0';

	return (concat_n);
}
