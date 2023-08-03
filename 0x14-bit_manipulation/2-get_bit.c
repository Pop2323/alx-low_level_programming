#include "main.h"

/**
 * get_bit - func that return value of a bit at a given index.
 * @n: The num to extract the bit from it.
 * @index: The index of the bit, starting from 0.
 *
 * Return: return the value of the bit at index, otherwise -1.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
