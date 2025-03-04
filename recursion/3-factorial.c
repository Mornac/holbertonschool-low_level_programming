#include "main.h"

/**
 *factorial - returns the factorial of a given number
 *@n: number given
 *Return: a value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		factorial(n * (n - 1));
	}
	return (0);
}
