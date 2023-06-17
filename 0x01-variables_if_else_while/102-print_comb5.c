#include <stdio.h>

/**
 * main - Entry point
 *
 * Title: a program that prints all possible combinations of two digit
 *
 * Return: return 0
*/

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1 + 1; num2 <= 98; num2++)
		{
			printf("%02d %02d", num1, num2);
			if (num1 != 99 || num2 != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
