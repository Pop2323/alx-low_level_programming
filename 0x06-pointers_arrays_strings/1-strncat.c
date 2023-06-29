#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 *
 * @dest: 1st pointer that is main
 * @src: second pointer
 * @n: bytes from src
 *
 * Return: dest
*/

char *_strncat(char *dest, const char *src, int n)
{
	int c, i;

	len = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}
