#include "main.h"
#include <stdio.h>

/**
 *is_prime_number - returns True if input int is a prime nb
 *@n: number to check
 *Return: true or false
 */
int is_prime_number(int n)
{
	int p = n / 2;

	if (n <= 1)
		return (0);
	return (_prime(n, p));
}

/**
 *_prime - returns 1 if input int is a prime nb otherwise return 0
 *@n: number to check
 *@p: number checked
 *Return: 1 if prime nb, 0 otherwise
 */
int _prime(int n, int p)
{
	if (p <= 1)
		return (1);

	else if (n % p == 0)
		return (0);
	return (_prime(n, p - 1));
}
