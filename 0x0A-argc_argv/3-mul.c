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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int calc = num1 * num2;

	printf("%d\n", calc);
	return (0);
}
