#include "main.h"

/**
 * print_diagsums - func that prints the sum of the two diagonals
 * @a: array (2d) for int
 * @size: the size of array
*/

void print_diagsums(int *a, int size)
{
	int i, m = 0, s = 0;

	for (i = 0; i < size; i++)
	{
		m = m + a[i];
		s = s + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", m);
	printf("%d\n", s);

}
