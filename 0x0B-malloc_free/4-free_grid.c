#include "main.h"

/**
 * free_grid - func that frees a 2 dimensional grid created by your alloc_grid
 *
 * @grid: ptr to ptr int value
 *
 * @height: int vale
 *
 * Return: return Null or value
*/

void free_grid(int **grid, int height)
{
	int j;
	
	if (grid == NULL)
	{
		return;
	}
	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
