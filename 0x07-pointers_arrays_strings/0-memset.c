#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * @n: number of bytes to be filled
 * @b: Constant byte value to fill the memory area
 * @s: Pointer to the memory area to be filled
 *
 * Return: return ptr s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
