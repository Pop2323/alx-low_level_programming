#include "main.h"

/**
 * main - Entry point
 *
 * Title:  Even Liber Abbaci
 *
 * Return: return 0
*/

int main(void)
{
	int first = 0, second = 1, next;
	int f;

	while (1)
	{
		next = first + second;

		if (next > 4000000)
			break;

		if ((next % 2) == 0)
			f += next;

		first = second;
		second = next;
	}
	printf("%.0f\n", f);

	return (0);
}
