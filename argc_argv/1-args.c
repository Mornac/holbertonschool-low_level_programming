#include <stdio.h>

/**
 *main - entry point
 *@argc: count
 *@argv: array
 *Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
