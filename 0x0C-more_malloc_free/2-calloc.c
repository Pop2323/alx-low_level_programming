#include "main.h"

/**
 * *_calloc - func that allocates memory for an array, using malloc
 *
 * @nmemb: the num of elements in the array
 * @size: the size of each element in the array
 *
 * Return: return NULL or ptr value
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		memset(ptr, 0, nmemb * size);
	return (ptr);
}
