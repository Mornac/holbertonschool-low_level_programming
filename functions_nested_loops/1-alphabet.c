#include "main.h"

/**
 * print_alphabet - function
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
