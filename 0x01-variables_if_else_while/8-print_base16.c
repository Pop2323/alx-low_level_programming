#include <stdio.h>

/**
 * main - Entry point
 *
 * Title: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: return 0
*/

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
	}
	for (num = 0; num < 6; num++)
	{
		putchar('a' + num);
	}
	putchar('\n');

	return (0);
}
