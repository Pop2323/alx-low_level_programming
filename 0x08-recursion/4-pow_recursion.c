#include "main.h"

/**
 * _pow_recursion - funct that returns the value of x raised to the pow of y
 *
 * @x: base num
 * @y: power
 *
 * Return: return the value of x raised to the pow of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
