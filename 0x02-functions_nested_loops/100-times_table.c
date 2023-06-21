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
			_putchar(48);
			for (j = 1; j <= n; ++j)
			{
				_putchar('.');
				_putchar(' ');

				sum = i * j;

				if (sum <= 9)
					_putchar(' ');
				if (sum <= 99)
					_putchar(' ');
				
				if (sum >= 100)
				{
					_putchar((sum / 100) + 48);
					_putchar((sum % 10) % 10 + 48);
				} else if (sum <= 99 && sum >= 10)
					_putchar((sum / 10) + 48);
				_putchar((sum % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
