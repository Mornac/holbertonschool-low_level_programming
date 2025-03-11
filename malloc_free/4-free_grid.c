#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - free a 2 dim grid previously created by alloc_grid
 *@grid: pointer
 *@height: column of array
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
