#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: variable
 * Return: Always 0
 */
void print_triangle(int size)
{
	int l;
	int c;

	for (l = 1; l <= size; l++)
	{
		for (c = size - l; c >= 0 ; c--)
		{
			_putchar (32);
		}
		for (c = 1; c <= l; c++)
		{
		_putchar (35);
		}
		_putchar ('\n');
	}
	if (size == 0)
	{
		_putchar ('\n');
	}
}
