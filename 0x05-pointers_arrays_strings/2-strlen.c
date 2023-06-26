#include "main.h"

/**
 * _strlen - function that returns the length of a string
 *
 * @s: char string
 *
 * Return: length of the str
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;

	return (len);
}
