#include "main.h"

/**
 *  _strspn - function that gets the length of a prefix substring
 *
 *  @s: consists only of characters from the string
 *  @accept: It returns the number of bytes in the initial segment of s
 *
 *  Return: unsigned integer
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
