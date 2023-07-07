#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: represents the number of command-line args
 * @argv: represents an array of strings
 *
 * Return: return 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
