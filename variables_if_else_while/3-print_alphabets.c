#include <stdio.h>

/**
 * main - Entry point
 * that only test
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'Z')
	{
		putchar(ch);
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
