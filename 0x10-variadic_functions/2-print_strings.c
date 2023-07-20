#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the str separator
 * @n: the num of the args
 * @...: the str  that will print
 *
 * Return: return void
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	int i = n;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
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
