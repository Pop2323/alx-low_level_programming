#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string
 *
 * @s: char string
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	int lastIndex;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		lastIndex = len - 1 - i;
		temp = s[i];
		s[i] = s[lastIndex];
		s[lastIndex] = temp;
	}
}
