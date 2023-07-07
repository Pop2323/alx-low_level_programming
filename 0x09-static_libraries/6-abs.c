#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 * @n: check the num if it is positive or negativ
 *
 * Return: return 0
*/

int _abs(int n)
{
	if (n < 0)
		n *= (-1);
	return (n);
}
