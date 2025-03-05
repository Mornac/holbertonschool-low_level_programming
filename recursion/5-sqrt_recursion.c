#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - return natural square root of a number
 *@n: number
 *Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}

	else if (n % i == 0)
	{
		return (n = i * i);
	}
	return (0);
}
