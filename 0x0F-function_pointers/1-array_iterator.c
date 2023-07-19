#include "function_pointers.h"

/**
 * array_iterator - func that executes a func given as a parameter on each element of an arr
 *
 * @array: intger arr
 * @size: the size of arr
 * @action: function_ptr
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
