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
	int *res = array + size - 1;

	if (array && action && size)
		while (array <= res)
			action(*array++);
}
