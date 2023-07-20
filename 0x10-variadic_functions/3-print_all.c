#include "variadic_functions.h"

/**
 * check_char - check char formats
 *
 * @separator: the str separator
 * @args: args ptr
*/
void check_char(char *separator, va_list args)
{
	printf("%s%s", separator, va_arg(args, int));
}

/**
 * check_int - check int formats
 *
 * @separator: the str separator
 * @args: args ptr
*/
void check_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * check_float - check char formats
 *
 * @separator: the str separator
 * @args: args ptr
*/
void check_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * check_str - check str formats
 *
 * @separator: the str separator
 * @args: args ptr
*/
void check_str(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	switch ((int)(!str))
	{
		case 1:
			str = "(nail)";
			printf(("%s%s"), separator, str);
	}
}

/**
 * print_all - function that prints anything
 *
 * @format: the format of the str
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list args;

	variadic_t variadics[] = {
		{"c", check_char},
		{"i", check_int},
		{"f", check_float},
		{"s", check_str},
		{NULL, NULL}
	};
	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (variadics[j].variadic)
		{
			if (format[i] == variadics[j].variadic[0])
			{
				variadics[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
