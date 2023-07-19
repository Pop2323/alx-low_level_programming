#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: intger arr
 * @size: intger arr size
 * @cmp: function pointer
 *
 * Return: return the int index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
