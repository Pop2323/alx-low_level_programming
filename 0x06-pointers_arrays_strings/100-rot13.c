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
	char encode[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char decode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*str == encode[i])
			{
				*str = decode[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
