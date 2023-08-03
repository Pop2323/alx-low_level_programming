#include "main.h"

/**
 * binary_to_uint - this Converts a binary num to an unsigned int.
 * @b: Ptr to a str of 0 and 1 chars.
 *
 * Return: return the converted number, otherwise 0.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);

	for (; *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = res * 2 + (*b - '0');
	}
	return (res);
}
