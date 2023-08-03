#include "main.h"

/**
 * clear_bit - Sets the val of a bit to 0.
 *
 * @n: Ptr to the num where the bit that should be cleared.
 * @index: The index of the bit, starting from 0.
 *
 * Return: return 1 if successful, or -1 if an error.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1L << index);
	return (1);
}
