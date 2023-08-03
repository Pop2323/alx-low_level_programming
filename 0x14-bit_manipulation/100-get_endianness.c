#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: return 0 if big endian, 1 if small endian.
*/
int get_endianness(void)
{
	unsigned int num = 1;
	char *check_endianness = (char *)&num;

	return (*check_endianness == 1);
}
