#include "main.h"

/**
 * flip_bits - Returns the num of bits to flip to get from n to m.
 *
 * @n: First num.
 * @m: Second num.
 *
 * Return: return the num of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int res = 0;

	while (xor_res)
	{
		res += xor_res & 1;
		xor_res >>= 1;
	}
	return (res);
}
