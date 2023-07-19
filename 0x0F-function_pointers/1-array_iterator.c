#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a parameter on each elem
 *
 * @array: intger arr
 * @size: the size of arr
 * @action: function_ptr
 *
 * Return: return void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *res = array + size - 1;

	if (array && size && action)
		while (array <= res)
			action(*array++);
}
