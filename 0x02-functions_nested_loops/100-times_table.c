#include "main.h"

/**
 * print_times_table -  function that prints the n times table, starting with 0
 *
 * @n: compare with other parameter
*/

void print_times_table(int n)
{
	int i, j, sum;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; ++i)
		{
			_putchar('0');
			for (j = 1; j <= n; ++j)
			{
				_putchar('.');
				_putchar(' ');

				sum = i * j;

				if (sum <= 9 && sum <= 99)
					_putchar(' ');
				if (sum >= 100)
				{
					_putchar((sum / 100) + '0');
					_putchar((sum % 10) % 10 + '0');
				} else if (sum >= 10 && sum <= 99)
					_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
