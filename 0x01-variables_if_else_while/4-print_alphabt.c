#include <stdio.h>

/**
 * main - Entry point
 *
 * Title: a C program that prints the alphabet in lowercase, except q and e
 *
 * Return: return 0
*/

int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		if (alph != 'q' && alph != 'e')
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
