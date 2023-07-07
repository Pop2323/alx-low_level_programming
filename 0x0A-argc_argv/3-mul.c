#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: represents the number of command-line args
 * @argv: represents an array of strings
 *
 * Return: return 0 or error or result
*/

int main(int argc, char *argv[])
{
	int calc;

	if (argc == 3)
	{
		calc = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", calc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
