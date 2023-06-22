#include "main.h"

/**
 * print_numbers -  function that prints the numbers, from 0 to 9
 *
 * Return: return 0
*/

void print_numbers(void)
{
	int n;
	char digit;

	for (n = 0; n <= 9; n++)
	{
		digit = '0' + n;
		_putchar(digit);
	}
	_putchar('\n');
}
