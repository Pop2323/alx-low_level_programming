#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: that matches any character in accept
 * @accept: string containing the chars to search for in the input string s
 *
 * Return: return null
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
