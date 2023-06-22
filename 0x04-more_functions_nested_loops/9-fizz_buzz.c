#include "main.h"

/**
 * main -  program that prints the numbers from 1 to 100
 * for multiples of three print Fizz
 * for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz
 *
 * Return: return 0
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if (n % 3 == 0)
		printf("Fizz");
	else if (n % 5 == 0)
		printf("Buzz");
	else if (n % 3 == 0 && n % 5 == 0)
		printf("FizzBuzz");
	else
		print("%d", n);
	if (n != 100)
		printf(' ');
	else
		printf("\n");
	}

	return (0);
}
