#include "main.h"

/**
 * print_binary - that Prints the binary representation of a num.
 * @n: The num to print in binary.
 *
 * Return: return void.
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
