#include "main.h"

/**
 * *string_toupper - function that changes all lower letters of a str to upper
 *
 * @str: string that will return
 *
 * Return: str
*/

char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
