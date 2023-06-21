#include "main.h"

/**
 * main - Entry point function
 *
 * Title: Nature made the natural numbers
 *
 * Return: return 0
*/

int main(void)
{
	int max = 1024;
	int sum = 0;
	int i;

	for (i = 0; i < max; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i
	}
	printf("%d\n", sum);

	return (0);
}
