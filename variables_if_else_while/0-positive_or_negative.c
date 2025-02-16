#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * return: 0
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive \n", 0);
	}
	else if (n < 0)
	{
		printf("%d is negative \n", 0);
	}
	else
	{
		printf("%d is zero \n", 0);
	}
	return (0);
}
