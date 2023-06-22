#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: return 0
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(48 + n);
	}
	_putchar('\n');
}
