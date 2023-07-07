#include <stdio.h>
#include <stdlib.h>

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
	char *m;

	while (--argc)
	{
		for (m = argv[argc]; *m; m++)
		{
			if (*m < '0' || *m > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		calc = calc + atoi(argv[argc]);
	}
	printf("%d\n", calc);
	return (0);
}
