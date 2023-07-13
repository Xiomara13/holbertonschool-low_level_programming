#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function
 * @grid: grid
 * @height: height
 * Return:
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
