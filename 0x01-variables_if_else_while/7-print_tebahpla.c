#include <stdio.h>

/**
 * main - Entry point
 *
 * Title: a program that prints the lowercase alphabet in revers
 *
 * Return: return 0
*/

int main(void)
{
	char alph;

	for (alph = 'z' ; alph >= 'a' ; alph--)
	{
	putchar(alph);
	}
	putchar('\n');

	return (0);
}
