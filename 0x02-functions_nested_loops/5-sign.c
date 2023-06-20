#include "main.h"

/**
 * print_sign -  function that prints the sign of a number
 *
 * @n: that check the condition to add sign
 *
 * Return: return + if greater than 0, 0 if equal 0, else -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
