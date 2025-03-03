#include "main.h"
#include <stdio.h>
#include <string.h>
#include "2-strlen.c"

/**
 *_strstr - locates a substring
 *@haystack: string botte de foin
 *@needle : substring aiguille
 *
 *Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
