#include "variadic_functions.h"

/**
 * format_char - check char formats
 *
 * @separator: the str separator
 * @args: args ptr
*/
void format_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * format_int - check int formats
 *
 * @separator: the str separator
 * @args: args ptr
*/
void format_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * format_float - check char formats
 *
 * @separator: the str separator
 * @args: args ptr
*/
void format_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * format_str - check str formats
 *
 * @separator: the str separator
 * @args: args ptr
*/
void format_str(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";
			printf(("%s%s"), separator, str);
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
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_str},
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
