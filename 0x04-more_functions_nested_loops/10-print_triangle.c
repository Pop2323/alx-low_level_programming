#include "main.h"

/**
 * print_triangle -  function that prints a triangle
 *
 * @size: is the size of the triangle
 *
 * Return: return 0
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar("\n");
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if ((i + j) < size - 1)
					_putchar(' ');
				else
					-putchar('#');
			}
			_putchar('\n');
		}

	}
}
