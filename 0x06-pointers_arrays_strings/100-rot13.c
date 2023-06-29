#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 *
 * @str: check the string value
 *
 * Return: return ptr
*/

char *rot13(char *str)
{
	char *ptr = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		{
			str[i] = c + 13;
		}
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		{
			str[i] = c - 13;
		}
	}
	return (ptr);
}
