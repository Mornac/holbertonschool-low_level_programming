#include <stdio.h>

/**
 * main - Entry point
 * that only test
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
