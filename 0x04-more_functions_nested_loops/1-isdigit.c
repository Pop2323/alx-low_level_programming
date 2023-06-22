#include "main.h"

/**
 * _isdigit - function that checks for a digit 0 through 9
 *
 * @c: check for num from 0 to 9
 *
 * Return: return 1 if digit from 0 to 9 else 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
