#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 *
 * @n:  is the number of times
*/

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
