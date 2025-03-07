#include <stdio.h>
#include <stdlib.h>

/**
 *main - entry point
 *@argc: count
 *@argv: array
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((argv[i][j] < '0') || (argv[i][j] > '9'))
			{
				printf("error\n");
				return (0);
			}

		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
