#include <stdio.h>

/**
 * main - Entry point
 * that only test
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'q' && lettre != 'e')
			putchar(lettre);
	}
	putchar('\n');
	return (0);
}
