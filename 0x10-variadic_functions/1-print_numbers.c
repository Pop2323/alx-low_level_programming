#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: str separator
 * @n: the num of the args
 * @...: the int that will print
 *
 * Return: return void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = n;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	while (i--)
	{
		int num = va_arg(args, int);

		printf("%d", num);
		if (i > 0)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("\n");
		}
	}
	va_end(args);
}
