#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: variable
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar(n % 10);
	}
	else if (n < 0)
	{
		_putchar(-n % 10);
	}
	else
	{
		_putchar (n);
	}
	return (0);
}
