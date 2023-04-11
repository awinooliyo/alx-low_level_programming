#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2-D grid previously created.
* @grid: double pointer to the 2-D grid.
* @height: height of grid.
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
