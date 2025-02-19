#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char l;
	int x;

	for (l = 'a'; l <= 'z'; l++)
		for (x = 0; x < 10; x++)
		{
			_putchar(l);
			_putchar('\n');
		}
}
