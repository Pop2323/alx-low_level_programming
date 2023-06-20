#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
*/

void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');

			sum = row * col;
			if (sum <= 9)
				_putchar(' ');
			else
				_putchar((sum / 10) + '0');
			_putchar((sum % 10) + '0');
		}
		_putchar('\n');
	}
}
