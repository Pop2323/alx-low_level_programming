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
	unsigned long one = 0, two = 1, next;
	int i;

	for (i = 0; i < 50; i++)
	{
		next = one + two;
		printf("%lu", next);

		one = two;
		two = next;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
