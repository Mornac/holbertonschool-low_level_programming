#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: row of array
 *@height: column of array
 *Return: 0 or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w;
	int h;

	if (width == 0 || height == 0)
		return (NULL);
	grid = (int **) malloc(sizeof(int *) * height);

	if (grid != NULL)
	{
		for (; w < height; w++)
		{
			grid[w] = (int *) malloc(sizeof(int) * width);
			if (grid[w] != NULL)
			{
				for (h = 0; h < width; h++)
					grid[w][h] = 0;
			}
			else
			{
				while (w >= 0)
				{
					free(grid[w]);
					w--;
				}
				free(grid);
				return (NULL);
			}
		}
		return (grid);
	}
	else
	{
		return (NULL);
	}
}
