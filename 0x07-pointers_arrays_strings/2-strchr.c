#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 *
 * @s: a pointer to a string that will be searched for the character c
 * @c: the character that will be searched for in the string s
 *
 * Return: return s
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
