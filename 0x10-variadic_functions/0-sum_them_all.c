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
	int val;
	long long int sum = 0; 
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		sum += val;
	}
	va_end(args);
	return (sum);
}
