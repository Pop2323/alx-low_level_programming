#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 *
 * @str: char str
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int start_index;

	if (len % 2 == 0)
	{
		start_index = len / 2;
	}
	else
	{
		start_index = (len + 1) / 2;
	}
	for (i = start_index; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
