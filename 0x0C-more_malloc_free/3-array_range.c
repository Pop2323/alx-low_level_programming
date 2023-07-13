#include "main.h"

/**
 * *array_range - function that creates an array of integers
 *
 * @min: The minimum value in the array
 * @max: The maximum value in the array
 *
 * Return: return NULL or Value
*/

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
