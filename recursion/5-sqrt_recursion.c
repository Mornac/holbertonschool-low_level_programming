#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - return natural square root of a number
 *@n: number
 *Return: a value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}

	else
	{
		return (n + _sqrt_recursion(n - 1));
	}
	return (0);
}
