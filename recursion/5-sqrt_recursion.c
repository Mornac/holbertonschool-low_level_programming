#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - return natural square root of a number
 *@n: number
 *Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 *_sqrt - return square root of number
 *@n: number
 *@sq: squared number
 *Return: square root
 */
int _sqrt(int n, int sq)
{
	if (n > sq / 2)
		return (-1);
	else if (n * n == sq)
		return (n);
	return (_sqrt(n + 1, sq));
}
