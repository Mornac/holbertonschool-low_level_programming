#include "main.h"
#include "stdio.h"
/**
 * _isdigit - function that checks for a digit (0 through 9)
 * * @c: variable
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
