#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: char str
 *
 * Return: intger after converted
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	for (; *s != '\0'; s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	}

	return (num * sign);
}
