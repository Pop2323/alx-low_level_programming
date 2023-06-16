#include <stdio.h>

/**
 * main - Entry point
 *
 * Title: a program that prints all possible combinations of single-digit
 *
 * Return: return 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
