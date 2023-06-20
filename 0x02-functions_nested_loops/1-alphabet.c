#include "main.h"

/**
 * print_alphabet -  Write a function that prints the alphabet
 * in lowercase from a - z
*/

void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
