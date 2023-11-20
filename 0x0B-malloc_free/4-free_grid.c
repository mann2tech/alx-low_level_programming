#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees 2D grid
 * @grid: 2D array
 * @height: height of array 
 *
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		free(grid);
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
