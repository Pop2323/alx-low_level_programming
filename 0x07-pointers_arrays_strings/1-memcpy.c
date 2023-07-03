#include "main.h"

/**
 * *_memcpy - function that copies memory are
 *
 * @dest: the pointer to the destination memory area
 * @src: the pointer to the source memory area
 * @n: the number of bytes to be copied
 *
 * Return: return dest pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
