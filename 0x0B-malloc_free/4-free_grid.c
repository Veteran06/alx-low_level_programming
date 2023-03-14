#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: grid to free
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int w;

	if (grid == NULL || height == 0)
		return;
	for (w = 0; w < height; w++)
		free(grid[w]);

	free(grid);
}

