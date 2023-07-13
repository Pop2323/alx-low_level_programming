#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: integer
 *
 * Return: return NULL or ptr for the arrat that initialized
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
