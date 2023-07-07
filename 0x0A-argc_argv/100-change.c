#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min num of coins to make change for an amount of money
 *
 * @argc: represents the number of command-line args
 * @argv: represents an array of strings
 *
 * Return: return 0
*/

int main(int argc, char *argv[])
{
	int cents;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	num = 0;

	num += cents / 25;
	cents %= 25;
	num += cents / 10;
	cents %= 10;
	num += cents / 5;
	cents %= 5;
	num += cents / 2;
	cents %= 2;
	num += cents;

	printf("%d\n", num);
	return (0);
}
