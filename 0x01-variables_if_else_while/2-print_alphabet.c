#include <stdio.h>

/**
 * main - Entry point
 *
 * Title: print alphabet using putchar in lowercase
 *
 * Return: return 0
*/

int main(void)
{
	char alph;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		putchar(alph);
	}
	putchar ('\n');

	return (0);
}
