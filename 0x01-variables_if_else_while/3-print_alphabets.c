#include <stdio.h>

/**
 * main - Entry point
 *
 * Title: print alphabet using putchar in lowercase then uppercase
 *
 * Return: return 0
*/

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	return ('\n');

	return (0);
}
