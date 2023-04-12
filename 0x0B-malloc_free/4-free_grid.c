#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: grid to be freed
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int p;

	if (grid == NULL || height == 0)
	{
		return;
	}
	for (p = 0; p < height; p++)
	{
		free(grid[p]);
	}
	free(grid);
}

