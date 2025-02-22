#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
		_putchar ('0');
		for (b = 0; b <= 9 ; b++)
		{
			result = a * b;
			_putchar (',');
			_putchar(' ');
			if (b < 10)
			{
				_putchar (' ');
				_putchar (result + '0');
			}
			else
			{
				_putchar (result / 10 + '0');
				_putchar (result % 10 + '0');
			}
		}
		_putchar ('\n');
	}
}
