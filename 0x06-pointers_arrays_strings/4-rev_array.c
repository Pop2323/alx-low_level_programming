#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of int
 *
 * @a: fun takes an array a of integers
 * @n: the number of elements
 *
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		int j = n - i - 1;

		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
