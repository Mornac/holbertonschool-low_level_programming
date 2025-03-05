#include "main.h"
#include <stdio.h>

/**
 *is_prime_number - returns 1 if input int is a prime nb otherwise return 0
 *@n: number
 *Return: number
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n % i == 0)
	{
		return (0);
	}

	else if (i * i > n)
	{
		return (1);
	}
	return (0);
}
