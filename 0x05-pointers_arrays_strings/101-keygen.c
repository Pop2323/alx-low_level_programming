#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  generates random valid passwords for the program 101-crackme
 *
 * Return: zero
*/

int main(void)
{
	int calc;
	char str;

	srand(time(NULL));
	while (calc <= 2654)
	{
		str = rand() % 128;
		calc += str;
		putchar(str);
	}
	putchar(2772 - calc);
	return (0);
}
