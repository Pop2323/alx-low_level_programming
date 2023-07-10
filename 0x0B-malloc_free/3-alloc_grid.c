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

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		return (NULL);
	}
	int i;

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)calloc(width, sizeof(int));

		if (ptr[i] == NULL)
		{
			int j;

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
