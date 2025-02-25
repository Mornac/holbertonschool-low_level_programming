#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal
 * @n: variable
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar (' ');
		}
		_putchar (92);
		_putchar ('\n');
	}
	if (i <= 0)
		_putchar ('\n');
}
