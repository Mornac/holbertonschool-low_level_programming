#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: variable
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
	}
	else
	{
		return (-n % 10);
	}
	return (0);
}
