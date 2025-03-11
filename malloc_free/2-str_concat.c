#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenate two strings
 *@s1: first string
 *@s2: second string
 *Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, len = 0, concat_i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat_str[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat_str[concat_i++] = s2[i];

	return (concat_str);
	free(concat_str);

	return (0);
}
