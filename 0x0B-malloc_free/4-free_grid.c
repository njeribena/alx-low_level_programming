#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Funtion that frees a two dimensional grid
 * @grid: Pointer to pointer of array
 * @height: Height of the array
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL)
		free(grid);

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
