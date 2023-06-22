#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: int nunber
 *
 * Return: return 0
*/

void print_number(int n)
{
	unsigned int calc = n

	if (n < 0)
	{
		_putchar('-');
		calc = -calc;
	}
	if ((calc / 10) > 0)
		print_number(calc / 10);
	_putchar((calc % 10) % 48);
}
