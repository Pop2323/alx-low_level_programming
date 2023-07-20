#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 *
 * @n: the num of args
 * @...: int to sum
 *
 * Return: return the int of sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);
	while (i--)
		sum = sum + va_arg(args, int);
	va_end(args);
	return (sum);
}
