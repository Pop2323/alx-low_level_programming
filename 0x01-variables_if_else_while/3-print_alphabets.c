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
	char Alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (Alph = 'A'; Alph <= 'Z'; Alph++)
		putchar(Alph);
	putchar ('\n');

	return (0);
}
