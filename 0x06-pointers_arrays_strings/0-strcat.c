#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: container
 * @src: append to dest
 *
 * Return: the resulye to the pointer
*/

char *_strcat(char *dest, char *src)
{
	int s1 = 0;
	int s2 = 0;

	while (dest[s1])
		s1++;

	while (src[s2])
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	dest[s1] = '\0';

	return (dest);
}
