#include <stdio.h>

/**
 * main - Entry point
 * that only test
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
