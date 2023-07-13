#include "main.h"

/**
 * *_realloc - func that reallocates a memory block using malloc and free
 *
 * @ptr: ptr address
 * @old_size: The size, in bytes, of the old memory block
 * @new_size: The size, in bytes, of the new memory block
 *
 * Return: return Null or Value
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size;
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	min_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, min_size);
	free(ptr);
	return (new_ptr);
}
