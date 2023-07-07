#include "main.h"
#include <stddef.h>


/**
 * *_strstr - function that locates a substring
 *
 * @haystack: It returns a pointer to the beginning of the located substring
 * @needle: parameter in the _strstr function represents the substring
 *
 * Return: return null
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					break;
				}
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
