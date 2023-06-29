#include "main.h"

/**
 * lowercase - checks if a character is lowercase
 *
 * @c: character to check
 *
 * Return: 1 if lowercase, 0 otherwise
*/

int lowercase(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * Separators - checks if a character is a separator
 *
 * @c: character to check
 *
 * Return: 1 if separator, 0 otherwise
*/

int Separators(char c)
{
	int i = 0;
	char sperate[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == sperate[i])
			return (1);
	return (0);
}

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @str: string to capitalize
 *
 * Return: pointer to the modified string
*/

char *cap_string(char *str)
{
	char *ptr = str;
	int checkSperator = 1;

	if (lowercase(*str))
	{
		*str -= 32;
	}
	while (*str)
	{
		if (Separators(*str))
			checkSperator = 1;
		else if (lowercase(*str) && checkSperator)
		{
			*str -= 32;
			checkSperator = 0;
		}
		else
			checkSperator = 0;
		str++;
	}
	return (ptr);
}
