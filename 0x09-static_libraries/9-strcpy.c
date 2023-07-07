#include "main.h"

/**
 * *_strcpy - unction that copies the string pointed to by src
 *
 * @dest: char str
 * @src: cahr str
 *
 * Return: Nothing
*/

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (ptr);
}
