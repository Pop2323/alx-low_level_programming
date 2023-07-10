#include "main.h"

/**
 * **alloc_grid - returns a ptr to a 2 dimensional array of ints
 *
 * @width: int
 * @height: int
 *
 * Return: return 0
*/

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)calloc(width, sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
/**
 * free_grid - func that take 2 parameter
 * @grid: ptr to ptr
 * @height: integer
*/
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
	{
		return;
	}
	int i;
	
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
