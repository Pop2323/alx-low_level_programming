#include "main.h"
#include <string.h>

/**
 * main - Entry point
 *
 * Title: Write a program that prints _putchar
 *
 * Return: return 0
*/

int main(void)
{
	char put[] = "_putchar";
	int ch;

	for (ch = 0; ch < strlen(put); ch++)
		_putchar(put[ch]);
	_putchar('\n');

	return (0);
}
