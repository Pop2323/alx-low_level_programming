#include <stdio.h>

/**
 * main - Entry point
 *
 * Title: a program that prints all possible different combinations of two num
 *
 * Return: return 0
*/

int main(void)
{
	int num1 = 0;

	while (num1 <= 8)
	{
	int num2 = num1 + 1;

	while (num2 <= 9)
	{
		putchar(num1 + '0');
		putchar(num2 + '0');
		if (num1 != 8 || num2 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num2++;
	}
	num1++;
	}
	putchar('\n');

	return (0);
}
