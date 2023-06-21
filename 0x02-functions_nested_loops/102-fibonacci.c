#include "main.h"

/**
 * main - Entry point
 *
 * Title: program that prints the first 50 Fibonacci numbers
 *
 * Return: return 0
*/

int main(void)
{
	int one = 0;
	int two = 1;
	int next, i;

	for (i = 0; i < 50; i++)
	{
		next = one * two;
		printf("%d", next);

		one = two;
		two = next;

		if (next < 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
