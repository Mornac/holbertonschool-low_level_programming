#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: variable
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int ld = (n % 10);

	if (n >= 0)
		_putchar(ld + '0');
	else
	{
		ld  = (ld * -1);
		_putchar(ld + '0');
	}
	return (ld);
}
