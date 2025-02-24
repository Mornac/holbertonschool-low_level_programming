#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for  (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar (i % 10 + '0');
		}
		_putchar('\n');
	}
}
