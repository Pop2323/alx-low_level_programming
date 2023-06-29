#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 *
 * @str: string that will return
 * @ptr: pinter that will return
 *
 * Return: ptr
*/

int lowercase(char s)
{
	return (s >= 97 && s <= 122);
}
int Separators(char s)
{
	int i = 0;
	char sperate[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (s == sperate[i])
			return (1);
	return (0);
}
char *cap_string(char *c)
{
	char *ptr = c;
	int checkSperator = 1;

	while (*c)
	{
		if (Separators(*c))
			checkSperator = 1;
		else if (lowercase(*c) && checkSperator)
		{
			*c -= 32;
			checkSperator = 0;
		}
		else
			checkSperator = 0;
		c++;
	}
	return (ptr);
}
