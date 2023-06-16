#include <stdio.h>

/**
 * main - Entry point
 *
 * Title: a c program that prints all single digit numbers of base 10
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
	putchar('\n');

	return (0);
}
