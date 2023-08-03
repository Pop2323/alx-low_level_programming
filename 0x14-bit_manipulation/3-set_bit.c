#include "main.h"

/**
 * set_bit - Sets the val of a bit at the index.
 *
 * @n: Ptr to the num where the bit should be set.
 * @index: The index of the bit.
 *
 * Return: return 1 if successful, otherwise 0.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
