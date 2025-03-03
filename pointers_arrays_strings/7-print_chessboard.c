#include "main.h"
#include <stdio.h>
#include <string.h>
#include "2-strlen.c"

/**
 *_chessboard - prints the chessboard
 *@a: array
 *
 */
void print_chessboard(char (*a)[8])
{
	int l;
	int c;

	for (l = 0; l < 8; l++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[l][c]);
		}
		_putchar('\n');
	}
}
