#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - prints the result of the operation
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op(a, b);
	printf("%d\n", result);

	return (0);
}
