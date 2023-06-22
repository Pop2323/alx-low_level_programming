#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: return 0
*/

void more_numbers(void)
{
	int i, j, n;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			n = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				n = i % 10;
			}
		}
		_putchar(n + 48);
	}
	_putchar('\n');
}
