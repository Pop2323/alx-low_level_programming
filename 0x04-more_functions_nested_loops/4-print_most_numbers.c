#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: return 0
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(48 + num);
	}
	_putchar('\n');
}
