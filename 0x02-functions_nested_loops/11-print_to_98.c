#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n: int compare between num
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i < 98; i++)
			print("%d, ", i);
	print("98\n");
}
