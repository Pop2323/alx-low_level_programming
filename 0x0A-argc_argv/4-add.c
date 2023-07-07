#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: represents the number of command-line args
 * @argv: represents an array of strings
 *
 * Return: return 0 or clac or error
*/

int main(int argc, char *argv[])
{
	int calc = 0;
	int num;
	char *c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	calc = 0;

	for (int i = 1; i < argc; i++)
	{
		c = argv[i];

		for (int j = 0; c[j] != '\0'; j++)
		{
			if (!isdigit(c[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(c);
		calc = calc + num;
	}
	printf("%d\n", calc);
	return (0);
}
