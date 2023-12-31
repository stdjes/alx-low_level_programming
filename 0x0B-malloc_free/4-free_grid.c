#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the memory a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D grid to be freed.
 * @height: Height of the grid.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
