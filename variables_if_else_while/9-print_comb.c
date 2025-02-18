#include <stdio.h>

/**
 * main - Entry point
 * that only test
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
