#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: variable
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar ('0');
			_putchar (',');
			_putchar (' ');
			_putchar ('\n');

			if (n != 98)
			{
				_putchar ('0');
				_putchar (',');
				_putchar (' ');
				_putchar ('\n');
			}
		}
	else
	{
		for (; n >= 98; n--)
		{
			_putchar ('0');
			_putchar (',');
			_putchar (' ');
			_putchar ('\n');

			if (n != 98)
			{
			_putchar ('0');
			_putchar (',');
			_putchar (' ');
			_putchar ('\n');
			}
		}
	}
}
