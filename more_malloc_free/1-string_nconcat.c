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
	int length = 0;

	concat_n = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (n = 0; s1[n] || s2[n]; n++)
		length++;
	concat_n = malloc(sizeof(char) * length + 1);

	if (concat_n == NULL)
		return (NULL);

	for (n = 0; s1[n]; n++)
		concat_n[n] = s1[n];

	for (n = 0; s2[n]; n++)
		concat_n[n] = s2[n];

	return (concat_n);
	free(concat_n);

	return (0);
}
